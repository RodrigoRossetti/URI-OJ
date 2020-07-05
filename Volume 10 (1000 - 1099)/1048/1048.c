#include <stdio.h>
 
int main() {
    double s, ns;
    int pc;
    scanf("%lf", &s);
    if (s <= 400) {
        ns = s * 1.15;
        pc = 15;
    }
    else if (s <= 800) {
        ns = s * 1.12;
        pc = 12;
    }
    else if (s <= 1200) {
        ns = s * 1.10;
        pc = 10;
    }
    else if (s <= 2000) {
        ns = s * 1.07;
        pc = 7;
    }
    else {
        ns = s * 1.04;
        pc = 4;
    }
    printf("Novo salario: %.2f\n", ns);
    printf("Reajuste ganho: %.2f\n", ns - s);
    printf("Em percentual: %d %%\n", pc);
    return 0;
}