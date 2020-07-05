#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, nt, m, mt, total;
    while (cin >> n >> m) {
        nt = mt = 1;
        total = 0;
        if (n == 0) total++;
        else {
            for (int i = n; i > 0; i--) nt *= i;
            total += nt;
        }
        if (m == 0) total++;
        else {
            for (int i = m; i > 0; i--) mt *= i;
            total += mt;
        }
        cout << total << endl;
    }
    return 0;
}