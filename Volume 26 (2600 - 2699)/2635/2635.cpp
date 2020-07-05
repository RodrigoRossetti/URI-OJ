#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> v;
    string s;
    int n, q;
    cin >> n >> ws;
    while (n--) {
        cin >> s;
        v.push_back(s);
    }
    cin >> q >> ws;
    while (q--) {
        int total = 0, maior = 0;
        cin >> s;
        for (int i = 0; i < v.size(); i++) {
            if (v[i].find(s) != string::npos) {
                total++;
                if (v[i].length() > maior) maior = v[i].length();
            }
        }
        total ? printf("%d %d\n", total, maior) : printf("-1\n");
    }
    return 0;
}