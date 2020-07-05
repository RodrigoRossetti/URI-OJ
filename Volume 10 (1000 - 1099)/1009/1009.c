#include <stdio.h>
 
int main() {
    char n[50];
    double salario, vendas;
    scanf("%s", &n);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    printf("TOTAL = R$ %.2lf\n", salario+(vendas*0.15));
    return 0;
}