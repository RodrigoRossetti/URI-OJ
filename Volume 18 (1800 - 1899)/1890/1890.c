#include <stdio.h>
#include <math.h>

int main() {
    long long int t;
    int c, d;
    scanf("%lld", &t);
    while (t--) {
        scanf("%d %d", &c, &d);
        if (c == 0 && d == 0) printf("0\n");
        else {
            long long int r = (powf(26,c)*powf(10,d));
            printf("%lld\n", r);
        }
    }
    return 0;
}