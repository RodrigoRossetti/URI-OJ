#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) && n) {
        for (int i = 1; i*i <= n; i++)
            (i+1)*(i+1) > n ? printf("%d", i*i) : printf("%d ", i*i);
        printf("\n");
    }
    return 0;
}