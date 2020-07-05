#include <stdio.h>

int main() {
    long int n, x;
    scanf("%ld", &n);
    while (n--) {
        scanf("%ld", &x);
        if (x == 0) printf("NULL\n");
        else if (x % 2 == 0) {
            if (x > 0) printf("EVEN POSITIVE\n");
            else printf("EVEN NEGATIVE\n");
        }
        else {
            if (x > 0) printf("ODD POSITIVE\n");
            else printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}