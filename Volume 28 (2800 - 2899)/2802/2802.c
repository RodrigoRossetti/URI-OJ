#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    printf("%lld\n", 1 + (((n-1)*n)/2) + (((n)*(n - 1)*(n - 2 )*(n - 3))/24));
    return 0;
}