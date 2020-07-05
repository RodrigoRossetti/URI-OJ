#include <stdio.h>

int main() {
    int i, positivos = 0;
    double n, total = 0;
    for (i = 0; i < 6; i++) {
        scanf("%lf", &n);
        if (n > 0) {
            positivos++;
            total += n;
        }
    }
    printf("%d valores positivos\n", positivos);
    printf("%.1lf\n", total/positivos);
    return 0;
}