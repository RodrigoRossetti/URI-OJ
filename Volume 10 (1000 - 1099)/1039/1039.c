#include <stdio.h>
#include <math.h>
 
int main() {
    int r1, x1, y1, r2, x2, y2;
    while (scanf("%d%d%d%d%d%d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
        if (r1 >= (double)sqrt(pow(abs(x2-x1), 2) + pow(abs(y2-y1), 2)) + r2) printf("RICO\n");
        else printf("MORTO\n");
    }
    return 0;
}