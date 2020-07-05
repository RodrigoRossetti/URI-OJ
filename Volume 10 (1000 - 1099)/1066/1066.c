#include <stdio.h>

int main() {
    int n, i, negativo = 0, positivo = 0, impar = 0, par = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) par++;
        else impar++;
        if (n > 0) positivo++;
        else if (n < 0) negativo++;
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);
    return 0;
}