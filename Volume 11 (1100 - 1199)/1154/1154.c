#include <stdio.h>
 
int main() {
    int n, i = 0, total = 0;
    while (1) {
        scanf("%d", &n);
        if (n < 0) break;
        total += n;
        i += 1;
    }
    printf("%.2f\n", (float)total/i);
    return 0;
}