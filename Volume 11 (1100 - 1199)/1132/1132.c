#include <stdio.h>
 
int main() {
    int i, x, y, aux, total = 0;
    scanf("%d %d", &x, &y);
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    for (i = x; i <= y; i++)
        if (i % 13 != 0)
            total += i;
    printf("%d\n", total);
    return 0;
}