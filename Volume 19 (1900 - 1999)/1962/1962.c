#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int ano, t;
        scanf("%d", &t);
        if (t < 2015) {
            ano = 2015 - t;
            printf("%d D.C.\n", ano);
        }
        else {
            ano = t - 2014;
            printf("%d A.C.\n", ano);
        }
    }
    return 0;
}