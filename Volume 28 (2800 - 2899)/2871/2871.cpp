#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, total;
    while (scanf("%d%d", &n, &m) != EOF) {
        total = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d", &x);
                total += x;
            }
        }
        printf("%d saca(s) e %d litro(s)\n", total/60, total%60);
    }
    return 0;
}