#include <stdio.h>

int main() {
    int a, b, c, total;
    scanf("%d %d %d", &a, &b, &c);
    total = a + b + c;
    if (total > 24) total -= 24;
    else if (total < 0) total += 24;
    else if (total == 24) total = 0;
    printf("%d\n", total);
    return 0;
}	