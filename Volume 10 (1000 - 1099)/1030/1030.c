#include <stdio.h>

int josephus(int n, int k) {
    if (n == 1)
        return 0;
    if (k == 1)
        return n-1;
    if (k > n)
        return (josephus(n-1, k) + k) % n;
    int cnt = n / k;
    int res = josephus(n - cnt, k);
    res -= n % k;
    if (res < 0)
        res += n;
    else
        res += res / (k - 1);
    return res;
}

int main() {
    int nc, n, k;
    scanf("%d", &nc);
    for (int i = 1; i <= nc; i++) {
        scanf("%d %d", &n, &k);
        printf("Case %d: %d\n", i, josephus(n, k)+1);
    }
    return 0;
}