#include <stdio.h>
 
int main() {
    int n, x, y, i, aux, total;
    scanf("%d", &n);
    while (n--) {
        total = 0;
        scanf("%d %d", &x, &y);
        if (x > y) {
            aux = x;
            x = y;
            y = aux;
        }
        for (i = x+1; i < y; i++) {
            if (i % 2 != 0) total += i;
        }
        printf("%d\n", total);
    }
    return 0;
}