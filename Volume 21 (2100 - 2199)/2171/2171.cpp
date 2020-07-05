#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, total;
    while(cin >> n && n) {
        total = 0;
        for(int j=1; total + j <= n; j++) {
            total += j;
        }
        cout << total << ' ' << n - total << endl;
    }
    return 0;
}