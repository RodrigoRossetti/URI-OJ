#include <stdio.h>

int main() {
    int n, i, pares = 0;
    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0)
            pares++;
    }
    printf("%d valores pares\n", pares);
    return 0;
}