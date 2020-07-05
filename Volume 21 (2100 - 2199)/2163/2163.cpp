#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int i, j, k, l, x = 0, y = 0;
    scanf("%d %d", &i, &j);
    int v[i][j];
    for(k = 0; k < i; k++)
        for(l = 0; l < j; l++)
            scanf("%d", &v[k][l]);
    for(k = 1; k < i-1; k++) {
        for(l = 1; l < j-1; l++) {
            if (v[k][l] == 42 && v[k][l+1] == 7 && v[k+1][l] == 7 && v[k][l-1] == 7 && v[k-1][l] == 7 && v[k+1][l+1] == 7 && v[k-1][l-1] == 7 && v[k-1][l+1] == 7 && v[k+1][l-1] == 7) {
                x = k+1;
                y = l+1;
                break;
            }
        }
    }
    printf("%d %d\n", x, y);
}