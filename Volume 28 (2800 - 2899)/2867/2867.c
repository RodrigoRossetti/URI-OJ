#include <stdio.h>
#include <math.h>

int main() {
    int c;
    double n, m;
    scanf("%lld", &c);
    while(c--) {
        scanf("%lf%lf", &n, &m);
        printf("%.0lf\n", floor(m*log10(n))+1);
    }
    return 0;
}