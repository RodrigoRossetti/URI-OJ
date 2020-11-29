#include <stdio.h>
 
int main() {
    int out[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    double value[12] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.1, 0.05, 0.01};
    double n = 0;
    scanf("%lf", &n);
    for (int i = 0; i < 12; i++) {
        out[i] = n / value[i];
        n -= value[i] * out[i];
    }
    if (n >= 0.001) out[11]++;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", out[0]);
    printf("%d nota(s) de R$ 50.00\n", out[1]);
    printf("%d nota(s) de R$ 20.00\n", out[2]);
    printf("%d nota(s) de R$ 10.00\n", out[3]);
    printf("%d nota(s) de R$ 5.00\n", out[4]);
    printf("%d nota(s) de R$ 2.00\n", out[5]);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", out[6]);
    printf("%d moeda(s) de R$ 0.50\n", out[7]);
    printf("%d moeda(s) de R$ 0.25\n", out[8]);
    printf("%d moeda(s) de R$ 0.10\n", out[9]);
    printf("%d moeda(s) de R$ 0.05\n", out[10]);
    printf("%d moeda(s) de R$ 0.01\n", out[11]);
    return 0;
}