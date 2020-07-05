#include <bits/stdc++.h>
using namespace std;

int main() {
    int total, n;
    string s;
    stack<char> st;
    cin >> n >> ws;
    while(n--) {
        getline(cin, s);
        st = stack<char>();
        total = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '<') st.push('<');
            else if (s[i] == '>' && st.size() != 0) {
                st.pop();
                total++;
            }
        }
        cout << total << endl;
    }
    return 0;
}