#include <stdio.h>

int main() {
    int k, total = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &k);
        if (k >= 0) total++;
    }
    printf("%d valores positivos\n", total);
    return 0;
}