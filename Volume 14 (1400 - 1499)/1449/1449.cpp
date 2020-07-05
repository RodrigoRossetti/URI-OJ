#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t, n, m;
    string s1, s2;
    map<string, string> ma;
    map<string, string>::iterator it;
    cin >> t;
    while (t--) {
        s1.clear(), s2.clear(), ma.clear();
        cin >> n >> m >> ws;
        while (n--) {
            getline(cin, s1);
            getline(cin, s2);
            ma[s1] = s2;
        }
        while (m--) {
            getline(cin, s1);
            stringstream c(s1);
            while (c >> s2) {
                it = ma.find(s2);
                it != ma.end() ? cout << ma[s2]: cout << s2;
                c.rdbuf()->in_avail() ? cout << " " : cout << endl;
            }
        }
        cout << endl;
    }
    return 0;
}