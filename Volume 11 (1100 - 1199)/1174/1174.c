#include <stdio.h>
 
int main() {
    int i;
    double arr[100] = {0};
    for (i = 0; i < 100; i++) scanf("%lf", &arr[i]);
    for (i = 0; i < 100; i++) if (arr[i] <= 10) printf("A[%d] = %.1lf\n", i, arr[i]);
    return 0;
}