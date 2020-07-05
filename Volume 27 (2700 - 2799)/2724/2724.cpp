#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, u;
    cin >> n;
    for (int p = 0; p < n; p++) {
        vector<string> v;
        string s;
        v.clear();
        cin >> t >> ws;
        while (t--) {
            cin >> s;
            v.push_back(s);
        }
        cin >> u >> ws;
        while (u--) {
            bool flag = true;
            cin >> s;
            for (int i = 0; i < v.size(); i++) {
                size_t x = s.find(v[i]);
                if (x != string::npos && !isdigit(s[x+v[i].length()]) && !islower(s[x+v[i].length()])) flag = false;
            }
            flag ? cout << "Prossiga\n" : cout << "Abortar\n";
        }
        if (p != n-1) cout << endl;
    }
    return 0;
}