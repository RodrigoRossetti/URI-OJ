#include <stdio.h>
 
int main() {
    int n;
    double a, b;
    scanf("%d", &n);
    while (n--) {
        scanf("%lf %lf", &a, &b);
        b ? printf("%.1lf\n", a/b) : printf("divisao impossivel\n");
    }
    return 0;
}