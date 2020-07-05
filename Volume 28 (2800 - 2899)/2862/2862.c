#include <stdio.h>
 
int main() {
    int c, n;
    scanf("%d", &c);
    while (c--) {
        scanf("%d", &n);
        n <= 8000 ? printf("Inseto!\n")  : printf("Mais de 8000!\n");
    }
    return 0;
}