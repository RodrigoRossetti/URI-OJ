#include <iostream>
#include <cstdio>

int main() {
    double total = 0, arr[12][12];
    char c;
    int cond = 10;
    scanf(" %c", &c);
    for (int x = 0; x <= 11; x++)
        for (int y = 0; y <= 11; y++)
            scanf("%lf", &arr[x][y]);

    for (int i = 0; i <= 10; i++) {
        for (int j = 0; j <= cond; j++)
            total += arr[i][j];
        cond--;
    }
     
    if (c == 'S') printf("%.1lf\n", total);
    else if (c == 'M') printf("%.1lf\n", total/66);
    return 0;
}