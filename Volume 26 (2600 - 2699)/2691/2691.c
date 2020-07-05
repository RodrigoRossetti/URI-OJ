#include <stdio.h>

int main() {
    int n, c1, c2, i;
    char c;
    scanf("%d", &n);
    while (n--) {
        scanf("%dx%d", &c1, &c2);
        for (i = 5; i <= 10; i++) {
            if (c1 != c2)
                printf("%d x %d = %d && %d x %d = %d\n", c1, i, c1*i, c2, i, c2*i);
            else 
                printf("%d x %d = %d\n", c1, i, c1*i);
        }
    }
    return 0;
}