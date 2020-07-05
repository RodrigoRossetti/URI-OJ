#include <stdio.h>
#include <stdlib.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (c+b>a&&c+a>b&&b+a>c&&abs(b-c)<a&&abs(a-c)<b&&abs(a-b)<c) { // Condicao de existencia do triangulo
        printf("Perimetro = %.1lf\n", a+b+c);
    } else {
        printf("Area = %.1lf\n", ((a+b)*c)/2);
    }
}