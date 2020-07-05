#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, i, j, x1, x2, y1, y2;
    while(cin >> n >> m) {
        int a[n][m];
        for(i = 0; i < n; i++) {
            for(j = 0; j < m; j++) {
                cin >> a[i][j];
                if (a[i][j] == 2) {
                    x1 = i;
                    y1 = j;
                }
                else if (a[i][j] == 1) {
                    x2 = i;
                    y2 = j;
                }
            }
        }
        cout << abs(x1-x2) + abs(y1-y2) << endl;
    }
    return 0;
}