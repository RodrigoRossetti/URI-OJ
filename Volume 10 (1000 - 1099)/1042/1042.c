#include <stdio.h>
 
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c) {
        printf("%d\n", a);
        if (b < c)
            printf("%d\n%d\n\n", b, c);
        else
            printf("%d\n%d\n\n", c, b);
    }
    else if (c <= b && c <= a) {
        printf("%d\n", c);
        if (a < b)
            printf("%d\n%d\n\n", a, b);
        else
            printf("%d\n%d\n\n", b, a);
    }
    else if (b <= a && b <= c) {
        printf("%d\n", b);
        if (a < c)
            printf("%d\n%d\n\n", a, c);
        else
            printf("%d\n%d\n\n", c, a);
    }
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}