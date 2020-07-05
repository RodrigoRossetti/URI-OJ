#include <bits/stdc++.h>
using namespace std;

int main() {
    int inicio, fim, n, arr[103][103];
    while (cin >> n) {
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j) arr[i][j] = 2;
                else if (i + j == n - 1) arr[i][j] = 3;
            }
        }
        inicio = n/3;
		fim = n - inicio;
        for(int i = inicio; i < fim; i++)
			for(int j = inicio; j < fim; j++)
				arr[i][j] = 1;
        arr[n/2][n/2] = 4;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                cout << arr[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
