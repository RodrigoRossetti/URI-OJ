#include <stdio.h>

int main() {
    long long int i, t, n, j;
    long long int fib[1001];
    scanf("%lld", &t);
    fib[0] = 0;
    fib[1] = 1;
    for (i = 2; i <= 60 ; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (j = 0; j < t ; j++) {
        scanf("%lld", &n);
        printf("Fib(%lld) = %lld\n", n, fib[n]);
    }
    return 0;
}