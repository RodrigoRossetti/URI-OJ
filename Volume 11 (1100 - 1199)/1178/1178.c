#include <stdio.h>

int main(void) {
    int i;
    double n[100];
    scanf("%lf", &n[0]);
    printf("N[0] = %.4lf\n", n[0]);
    for(i=1;i<100;i++) {
        n[i] = n[i-1]/2;
        printf("N[%d] = %.4lf\n", i, n[i]);
    }
    return 0;
}