#include <stdio.h>
 
int main() {
    int i, arr[10];
    scanf("%d", &arr[0]);
    printf("N[0] = %d\n", arr[0]);
    for(i = 1; i < 10; i++) {
        arr[i] = arr[i-1]*2;
        printf("N[%d] = %d\n", i, arr[i]);
    }
    return 0;
}