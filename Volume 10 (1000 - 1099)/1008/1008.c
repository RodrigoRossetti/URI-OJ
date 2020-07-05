#include <stdio.h>
 
int main() {
    int n;
    float salario, h;
    scanf("%d", &n);
    scanf("%f", &h);
    scanf("%f", &salario);
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2f\n", salario*h);
    return 0;
}