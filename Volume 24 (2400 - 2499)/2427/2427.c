#include <stdio.h>

int main() {
    int l, total = 1;
    scanf("%d", &l);
    while (l >= 2) {
        l /= 2;
        total *= 4;
    }
    printf("%d\n", total);
    return 0;
}