#include <stdio.h>
 
int main() {
    int notas[7] = {0,0,0,0,0,0,0};
    int n, x;
    scanf("%d", &n);
    x = n;
    if (n >= 100) {
        notas[0] = n / 100;
        n -= 100 * notas[0];
    }
    if (n >= 50) {
        notas[1] = n / 50;
        n -= 50 * notas[1];
    }
    if (n >= 20) {
        notas[2] = n / 20;
        n -= 20 * notas[2];
    }
    if (n >= 10) {
        notas[3] = n / 10;
        n -= 10 * notas[3];
    }
    if (n >= 5) {
        notas[4] = n / 5;
        n -= 5 * notas[4];
    }
    if (n >= 2) {
        notas[5] = n / 2;
        n -= 2 * notas[5];
    }
    if (n >= 1) {
        notas[6] = n / 1;
        n -= 1 * notas[6];
    }
    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", x, notas[0], notas[1], notas[2], notas[3], notas[4], notas[5], notas[6]);
    return 0;
}