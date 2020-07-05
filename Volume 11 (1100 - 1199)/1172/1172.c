#include <stdio.h>
 
int main() {
    int i, x, arr[10];
    for (i = 0; i < 10; i++) {
        scanf("%d", &x);
        if (x <= 0) arr[i] = 1;
        else arr[i] = x;
    }
    for (i = 0; i < 10; i++) printf("X[%d] = %d\n", i, arr[i]);
    return 0;
}