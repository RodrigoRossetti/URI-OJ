#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int priority(char& c) {
    switch(c) {
        case '^': return 6;
        case '*': case '/': return 5;
        case '+': case '-': return 4;
        case '>': case '<': case '=': case '#': return 3;
        case '.': return 2;
        case '|': return 1;
    }
    return -1;
}

void shuntingYard(string& s) {
    int p, r = 0, f = 2;
    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i])) {
            if (f == 1 || f == -1) r = 1;
            f = 1;
        }
        else if (s[i] == '(') {
            if (f == 1 || f == -1) r = 1;
            f = -2;
        }
        else if (s[i] == ')') {
            if (f == 0 || f == -2 || f == 2) r = 1;
            f = -1;
        }
        else {
            if (priority(s[i]) == -1) {
                r = 2;
                break;
            }
            if (f == 0 || f == 2) r = 1;
            f = 0;
        }
    }
    if (r ==  1) {
        cout << "Syntax Error!\n";
        return;
    }
    else if (r == 2) {
        cout << "Lexical Error!\n";
        return;
    }
    queue<char> out;
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i])) out.push(s[i]);
        else if (s[i] == '(') st.push(s[i]);
        else if (s[i] == ')') {
            while (!st.empty() && st.top() != '(') {
                out.push(st.top());
                st.pop();
            }
            if (st.empty()) {
                cout << "Syntax Error!\n";
                return;
            }
            if (st.top() == '(') st.pop();
        }
        else {
            p = priority(s[i]);
            while (!st.empty() && st.top() != '(' && (priority(st.top()) > p
                    || (priority(st.top()) == p && st.top() != '^'))) {
                out.push(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty()) {
        if (st.top() == '(') {
            cout << "Syntax Error!\n";
            return;
        }
        out.push(st.top());
        st.pop();
    }
    while (!out.empty()) {
        cout << out.front();
        out.pop();
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while (getline(cin, s)) shuntingYard(s);
    return 0;
}