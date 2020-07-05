#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        n == 0 ? printf("vai ter copa!\n") : printf("vai ter duas!\n");
    }
    return 0;
}