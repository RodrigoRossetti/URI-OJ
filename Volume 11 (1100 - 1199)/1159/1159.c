#include <stdio.h>
 
int main() {
    int n, i, k, total;
    while (scanf("%d", &n) && n != 0) {
        total = 0;
        for (i = n, k = 0; k < 5; i++) {
            if (i % 2 == 0) {
                total += i;
                k++;
            }
        }
        printf("%d\n", total);
    }
}