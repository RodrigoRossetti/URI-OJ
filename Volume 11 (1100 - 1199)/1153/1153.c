#include <stdio.h>
 
int main() {
    int n , i, total = 1;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        total *= i;
    printf("%d\n", total);
    return 0;
}