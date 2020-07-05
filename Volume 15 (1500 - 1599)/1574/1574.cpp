#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, p;
    string s, st;
    unordered_map<int, string> m;
    cin >> t;
    while (t--) {
        m.clear();
        p = 0;
        cin >> n >> ws;
        for (int i = 1; i <= n; i++) {
            getline(cin, s);
            m[i] = s;
            while (s.length() > 8) {
                st = s.substr(8, s.length()-8);
                s = m[stoi(st)];
            }
            if (s == "LEFT") p--;
            else if (s == "RIGHT") p++;
        }
        cout << p << endl;
    }
    return 0;
}