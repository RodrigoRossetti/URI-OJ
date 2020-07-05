#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char s1[32], s2[32];
    char *pt1, *pt2;
    unsigned long long d1, d2;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%s%s", &s1, &s2);
        d1 = strtoull(s1, &pt1, 2);
        d2 = strtoull(s2, &pt2, 2);
        if (__gcd(d1, d2) != 1) printf("Pair #%d: All you need is love!\n", i);
        else printf("Pair #%d: Love is not all you need!\n", i);
    }
    return 0;
}