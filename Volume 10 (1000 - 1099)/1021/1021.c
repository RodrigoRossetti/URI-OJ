#include <stdio.h>
 
int main() {
    int notas[7] = {0,0,0,0,0,0,0};
    int moedas[7] = {0,0,0,0,0,0,0};
    float n = 0;
    scanf("%f", &n);
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
        moedas[0] = n / 1;
        n -= 1 * moedas[0];
    }
    if (n >= 0.5) {
        moedas[1] = n / 0.5;
        n -= 0.5 * moedas[1];
    }
    if (n >= 0.25) {
        moedas[2] = n / 0.25;
        n -= 0.25 * moedas[2];
    }
    if (n >= 0.1) {
        moedas[3] = n / 0.1;
        n -= 0.1 * moedas[3];
    }
    if (n >= 0.05) {
        moedas[4] = n / 0.05;
        n -= 0.05 * moedas[4];
    }
    if (n >= 0.01) {
        moedas[5] = n / 0.01;
        n -= 0.01 * moedas[5];
    }
    if (n >= 0.001) {
        moedas[5] += 1;
    }
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", notas[0], notas[1], notas[2], notas[3], notas[4], notas[5], moedas[0], moedas[1], moedas[2], moedas[3], moedas[4], moedas[5]);
    return 0;
}