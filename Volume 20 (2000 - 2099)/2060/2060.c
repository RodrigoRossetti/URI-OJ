#include <stdio.h>

int main() {
    int n, x, total[4];
    total[0] = total[1] = total[2] = total[3] = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (x % 2 == 0) total[0]++;
        if (x % 3 == 0) total[1]++;
        if (x % 4 == 0) total[2]++;
        if (x % 5 == 0) total[3]++;
    }
    printf("%d Multiplo(s) de 2\n", total[0]);
    printf("%d Multiplo(s) de 3\n", total[1]);
    printf("%d Multiplo(s) de 4\n", total[2]);
    printf("%d Multiplo(s) de 5\n", total[3]);
    return 0;
}