#include <stdio.h>
 
int main() {
    int n, a = 0, b = 1, c, i;
    scanf("%d", &n);
    if (n == 1) {
        printf("0\n");
    } else {
        printf("0 ");
        for(i=1;i<n-1;i++) {
            c = a + b;
            if(i%2==0) { a = c; } else { b = c; }
            printf("%d ", c);
        }
        c = a + b;
        printf("%d", c);
    }
    printf("\n");
    return 0;
}