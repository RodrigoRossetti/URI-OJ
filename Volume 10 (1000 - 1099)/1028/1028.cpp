#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, f1, f2;
    scanf("%d", &n);
    while (n--) {
        scanf("%d%d", &f1, &f2);
        printf("%d\n", __gcd(f1, f2));
    }
    return 0;
}