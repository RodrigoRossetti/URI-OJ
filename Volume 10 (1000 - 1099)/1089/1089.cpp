#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n, x, total, c;
    while (scanf("%d", &n) && n) {
        total = c = 0;
        v.clear();
        for (int i = 0; i < n; i++) {
            scanf("%d", &x);
            v.push_back(x);
        }
        if (n >= 3) {
            for (int i = 2; i < n; i++) {
                if (v[i-1] > v[i-2] && v[i-1] > v[i]) total++;
                else if (v[i-1] < v[i-2] && v[i-1] < v[i]) total++;
            }
        }
        if (v[0] > v[n-1] && v[0] > v[1]) total++;
        if (v[n-1] > v[n-2] && v[n-1] > v[0]) total++;
        if (v[0] < v[n-1] && v[0] < v[1]) total++;
        if (v[n-1] < v[n-2] && v[n-1] < v[0]) total++;
        printf("%d\n", total);
    }
    return 0;
}