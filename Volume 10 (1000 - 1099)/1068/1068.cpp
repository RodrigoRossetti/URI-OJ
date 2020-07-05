#include <bits/stdc++.h>
using namespace std;

int main() {
    int flag;
    string s;
    stack<char> st;
    while (getline(cin, s)) {
        st = stack<char>();
        flag = 1;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') st.push('(');
            else if (s[i] == ')' && st.size() == 0) flag = 0;
            else if (s[i] == ')' && st.size() != 0) st.pop();
        }
        if (st.size() != 0) flag = 0;
        flag ? cout << "correct\n" : cout << "incorrect\n";
    }
    return 0;
}