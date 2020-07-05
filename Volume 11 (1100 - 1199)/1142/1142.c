#include <stdio.h>
 
int main() {
    int n, i;
    scanf("%d", &n);
    for (i = 1; i < 4*n+1; i++)
        i % 4 == 0 ? printf("PUM\n") : printf("%d ", i);
    return 0;
}