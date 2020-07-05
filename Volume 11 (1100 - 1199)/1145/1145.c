#include <stdio.h>

int main(void) {
    int x, y, i, j = 1;
    scanf("%d%d", &x, &y);
    for(i = 1; i <= y; i++) {
        if(j < x) {
            printf("%d ", i);
            j++;
        }
        else {
            printf("%d\n", i);
            j = 1;
        }
    }
    return 0;
}