#include <stdio.h>

int main() {
    int i, d;
    int v[20];
    for(i = 1; i <= 20; i++) {
        scanf("%d", &d);
        v[20-i] = d;
    }
    for(i = 0; i < 20; i++) {
        printf("N[%d] = %d\n", i, v[i]);
    }
    return 0;
}