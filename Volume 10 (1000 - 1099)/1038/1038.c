#include <stdio.h>

int main() {
    int a, b;
    double l1[6] = {0, 4, 4.5, 5, 2, 1.5};
    scanf("%d %d", &a, &b);
    printf("Total: R$ %.2f\n", b * l1[a]);
    return 0;
}