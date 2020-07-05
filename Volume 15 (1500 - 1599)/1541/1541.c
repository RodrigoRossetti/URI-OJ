#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    while(a != 0) {
        printf("%.0f\n", floor(sqrt(a * b * 100 / c)));
        scanf("%d", &a);
        if (a == 0) break;
        scanf("%d %d", &b, &c);
    }
}