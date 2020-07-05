#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, atual, maior = INT_MIN;
    scanf("%d%d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        atual = 0;
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
            atual += arr[i][j];
        }
        if (atual > maior) maior = atual;
    }
    for (int i = 0; i < m; i++) {
        atual = 0;
        for (int j = 0; j < n; j++) {
            atual += arr[j][i];
        }
        if (atual > maior) maior = atual;
    }
    printf("%d\n", maior);
    return 0;
}