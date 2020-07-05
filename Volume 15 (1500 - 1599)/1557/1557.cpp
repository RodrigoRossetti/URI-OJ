#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int a[n][n], max = 0, count = 0, i, j, k;
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                k = i+j;
                a[i][j] = pow(2,k);
                if(i == j && i == n-1) {
                    max = a[i][j];
                    while(max != 0) {
                        count++;
                        max /= 10;
                    }
                }
            }
        }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n-1; j++) {
                printf("%*d ", count, a[i][j]);
            }
            printf("%*d\n", count, a[i][j]);
        }
        printf("\n");
    }
    return 0;
}