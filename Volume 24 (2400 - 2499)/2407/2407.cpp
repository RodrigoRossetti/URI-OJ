#include <bits/stdc++.h>
using namespace std;

int main() {
    bool flag = 1;
    long long n, k;
    scanf("%lld", &n);
    long long arr[n][n];
    bool numeros[n*n];
    memset(numeros, 0, sizeof(numeros));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%lld", &arr[i][j]);
    long long soma1, soma2, dig1 = 0, dig2 = 0;
    for (int i = 0, j = 0, q = n-1; i < n; i++, j++, q--) dig1 += arr[i][j],dig2 += arr[i][q];
    if (dig1 != dig2) flag = 0;
    if (flag) {
        for (int i = 0; i < n; i++) {
            soma1 = soma2 = 0;
            for (int j = 0; j < n; j++) {
                k = arr[i][j];
                if (numeros[k-1] == 0) numeros[k-1] = 1;
                else {
                    flag = 0;
                    break;
                }
                soma1 += arr[i][j];
                soma2 += arr[j][i];
            }
            if (soma1 != dig1 || soma1 != dig1) {
                flag = 0;
                break;
            }
        }
    }
    flag ? printf("%lld\n", soma1) : printf("0\n");
    return 0;
}