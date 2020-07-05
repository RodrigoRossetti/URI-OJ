#include <stdio.h>
 
int main() {
    int x, y, n, i, k, total;
    scanf("%d", &n);
    while (n--) {
        total = 0;
        scanf("%d %d", &x, &y);
        for (i = x, k = 0; k < y; i++) {
            if (i % 2 != 0) {
                total += i;
                k++;
            }
        }
        printf("%d\n", total);
    }
}