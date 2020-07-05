#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, esp, total = 0;
    cin >> n;
    int arr[n][n], borb[1003] = {0};
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> arr[i][j];
    for (int k = 0; k < 2*n; k++) {
        cin >> x >> y;
        esp = arr[x-1][y-1];
        if (x > n || y > n) continue;
        if (borb[esp] == 0) {
            borb[esp] = 1;
            total++;
        }
    }
    cout << total << endl;
	return 0;
}