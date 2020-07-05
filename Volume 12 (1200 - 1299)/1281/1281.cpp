#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, p;
    double k, total;
    string s;
    map<string, double> f;
    cin >> n;
    while (n--) {
        f.clear();
        total = 0;
        cin >> m;
        while (m--) {
            cin >> s >> k;
            f[s] = k;
        }
        cin >> p;
        while (p--) {
            cin >> s >> k;
            total += f[s]*k;
        }
        printf("R$ %.2lf\n", total);
    }
    return 0;
}