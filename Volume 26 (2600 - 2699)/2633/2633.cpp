#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, v;
    string c;
    map<int, string> m;
    while (cin >> n) {
        m.clear();
        while (n--) {
            cin >> c >> v;
            m[v] = c;
        }
        for (map<int, string>::iterator it = m.begin(); it != m.end(); ++it) {
            map<int, string>::iterator iter = it;
            if (++iter == m.end()) {
                cout << it->second;
                break;
            }
            else cout << it->second << " "; 
        }
        cout << endl;
    }
    return 0;
}