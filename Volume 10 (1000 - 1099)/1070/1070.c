#include <stdio.h>

int main() {
    int n, i, k = 0;
    scanf("%d", &n);
    i = n;
    if (n % 2 == 0) i++;
    for (i; k < 6; i+= 2, k++) {
        printf("%d\n", i);
    }
    return 0;
}