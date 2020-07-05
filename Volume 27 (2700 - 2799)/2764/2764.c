#include <stdio.h>

int main() {
    int d, m, a;
    scanf("%2d/%2d/%2d", &d, &m, &a);
    printf("%02d/%02d/%02d\n", m, d, a);
    printf("%02d/%02d/%02d\n", a, m, d);
    printf("%02d-%02d-%02d\n", d, m, a);
    return 0;
}