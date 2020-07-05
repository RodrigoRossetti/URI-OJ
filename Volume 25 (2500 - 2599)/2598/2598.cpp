#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long c, n, m, total;
    cin >> c;
    while (c--) {
        total = 0;
        cin >> n >> m;
        while (n > 0) {
            n -= m;
            total++;
        }
        cout << total << '\n';
    }
    return 0;
}