#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, x, i = 1, total, flag;
    vector<int> v;
    while (cin >> n >> q && n && q) {
        v.clear();
        while (n--) {
            cin >> x;
            v.push_back(x);
        }
        printf("CASE# %d:\n", i);
        sort(v.begin(), v.end());
        while (q--) {
            flag = 0;
            cin >> x;
            for (int j = 0; j < v.size(); j++) {
                if (v[j] == x) {
                    flag = 1;
                    total = j + 1;
                    break;
                }
            }
            flag ? printf("%d found at %d\n", x, total) : printf("%d not found\n", x);
        }
        i++;
    }
    return 0;
}