#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d, x, total, flag;
    vector<int> aux;
    vector<vector<int>> v;
    while (cin >> n >> d && n && d) {
        v.clear();
        flag = 0;
        for (int i = 0; i < d; i++) {
            aux.clear();
            for (int j = 0; j < n; j++) {
                cin >> x;
                aux.push_back(x);
            }
            v.push_back(aux);
        }
        for (int i = 0; i < n; i++) {
            total = 0;
            for (int j = 0; j < d; j++) {
                if (v[j][i] == 1) total++;
            }
            if (total == d) flag = 1;
        }
        cout << (flag ? "yes\n" : "no\n");
    }
    return 0;
}