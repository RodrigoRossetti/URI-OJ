#include <stdio.h>

int main() {
    int n, x, in = 0, out = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (x >= 10 && x <= 20) in++;
        else out++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}