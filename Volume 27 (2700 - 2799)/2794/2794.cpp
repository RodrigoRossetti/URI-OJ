#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, t, flag = 1;
    map<int, int> m;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &d, &t);
        m[d] = t;
    }
    int x = m.begin()->second;
    for (map<int, int>::iterator it = ++m.begin(); it != m.end(); ++it) {
        if (x < it->second) flag = 0;
        x = it->second;
    }
    flag ? printf("S\n") : printf("N\n");
    return 0;
}