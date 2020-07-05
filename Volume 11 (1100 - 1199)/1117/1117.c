#include <stdio.h>
 
int main() {
    double n, total = 0, soma = 0;
    while (total != 2) {
        scanf("%lf", &n);
        if (n < 0 || n > 10) printf("nota invalida\n");
        else {
            soma += n;
            total++;
        }
    }
    printf("media = %.2lf\n", soma/2);
    return 0;
}