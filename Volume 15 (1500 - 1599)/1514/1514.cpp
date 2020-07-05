#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, x, total, soma, prob[10001] = {0};
    bool f1, f2, f3, f4;
    while (cin >> n >> m && n && m) {
        memset(prob, 0, sizeof(prob));
        f1 = f2 = f3 = f4 = true;
        total = 4;
        for (int k = 0; k < n; k++) {
            soma = 0;
            for (int i = 0; i < m; i++) {
                cin >> x;
                soma += x;
                if (x) prob[i]++;
            }
            if (soma == 0 && f1) total--, f1 = false;
            else if (soma == m && f2) total--, f2 = false;
        }
        for (int i = 0; i < m; i++) {
            if (prob[i] == 0 && f3) total--, f3 = false;
            if (prob[i] == n && f4) total--, f4 = false;
        }
        cout << total << endl;
    }
    return 0;
}