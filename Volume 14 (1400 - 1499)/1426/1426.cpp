#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, arr[9][9];
    scanf("%d", &n);
    while(n--) {
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < 9; i += 2)
            for (int j = 0; j <= (i + 1); j += 2)
                scanf("%d", &arr[i][j]);
        for (int i = 0; i < 8; i += 2) {
            for (int j = 0; j <= (i + 1); j += 2) {
                arr[i+2][j+1] = (arr[i][j]-arr[i+2][j]-arr[i+2][j+2])/2;
                arr[i+1][j] = arr[i+2][j]+arr[i+2][j+1];
                arr[i+1][j+1] = arr[i+2][j+1]+arr[i+2][j+2];
            }
        }
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < (i + 1); ++j) {
                printf("%d", arr[i][j]);
                if(j != i) printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}