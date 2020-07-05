#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i;
    double k;
    cin >> n;
    while (n--) {
        cin >> k;
        for (i = 0; k > 1; i++, k /= 2) {}
        printf("%d dias\n", i);
    }
    return 0;
}