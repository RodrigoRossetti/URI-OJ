#include <stdio.h>

int main() {
    double a = 0;
    double b = 0;
    double c = 0;
    scanf("%lf\n%lf\n%lf", &a, &b, &c);
    printf("MEDIA = %.1lf\n", (a*2+b*3+c*5)/10);
    return 0;
}