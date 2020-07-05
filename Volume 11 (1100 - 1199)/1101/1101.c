#include <stdio.h>
 
int main() {
    int x, y, i, aux, soma;
    while (scanf("%d %d", &x, &y) && x > 0 && y > 0) {
        soma = 0;
        if (x > y) {
            aux = x;
            x = y;
            y = aux;
        }
        for (i = x; i <= y; i++) {
            printf("%d ", i);
            soma += i;
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}