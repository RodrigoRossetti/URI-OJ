#include <stdio.h>

int main() {
    int n;
    double min = 12, a;
    while(scanf("%d", &n) != EOF) {
        while (n--) {
            scanf("%lf", &a);
            if (a < min) min = a;
        }
        printf("%.2lf\n", min);
        min = 12;
    }
    return 0;
}