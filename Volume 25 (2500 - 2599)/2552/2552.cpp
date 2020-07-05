#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, total, arr[101][101];
    while (cin >> n >> m) {
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                total = 0;
                if (arr[i][j] == 1) cout << 9;
                else {
                    if ((arr[i][j+1] == 1 || arr[i][j+1] == 9) && j != m-1) total++;
                    if ((arr[i+1][j] == 1 || arr[i+1][j] == 9) && i != n-1) total++;
                    if ((arr[i][j-1] == 1 || arr[i][j-1] == 9) && j) total++;
                    if ((arr[i-1][j] == 1 || arr[i-1][j] == 9) && i) total++;
                    cout << total;  
                }
            }
            cout << endl;
        }
    }
    return 0;
}