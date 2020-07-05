#include <stdio.h>
 
int main() {
    int n, i, maior = 0, posicao = 0;
    for (i = 0; i < 100; i++) {
        scanf("%d", &n);
        if (n > maior) {
            maior = n;
            posicao = i;
        }
    }
    printf("%d\n%d\n", maior, posicao+1);
    return 0;
}