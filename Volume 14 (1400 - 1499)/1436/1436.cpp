#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t, n, x, c;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        c = (n/2)+1;
        for (int j = 1; j <= n; j++) {
            cin >> x;
            if (c == j) printf("Case %d: %d\n", i, x);
        }
    }
    return 0;
}