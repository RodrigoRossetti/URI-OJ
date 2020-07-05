#include <stdio.h>
 
int main() {
    int n, i;
    while(scanf("%d", &n) && n != 0) {
        for (i = 1; i < n; i++) printf("%d ", i);
        printf("%d\n", n);
    }
    return 0;
}