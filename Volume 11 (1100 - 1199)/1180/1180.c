#include <stdio.h>
 
int main() {
    int n, i, x, menor = 1001, pos = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x < menor) {
            menor = x;
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}