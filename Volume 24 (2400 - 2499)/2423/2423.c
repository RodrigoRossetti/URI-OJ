#include <stdio.h>

int main() {
    int a, b, c, max = 0;
    scanf("%d %d %d", &a, &b, &c);
    a /= 2;
    b /= 3;
    c /= 5;
    if (a <= b && a <= c) max = a;
    else if (b <= a && b <= c) max = b;
    else if (c <= a && c <= b) max = c;
    printf("%d\n", max);
    return 0;
}