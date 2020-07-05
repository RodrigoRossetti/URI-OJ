#include <stdio.h>
#include <stdlib.h>

int arr[1000001];

int main() {
    int n, i, i1, i2;
    long long t1, t2;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) scanf("%d", &arr[i]);
        t1 = arr[0], t2 = arr[n-1];
        i1 = 0, i2 = n-1;
        while (abs(i1-i2) != 1) {
            while (t1 >= t2 && abs(i1-i2) != 1) i2--, t2 += arr[i2];
            while (t2 >= t1 && abs(i1-i2) != 1) i1++, t1 += arr[i1];
        }
        printf("%lld\n", llabs(t1-t2));
    }
    return 0;
}