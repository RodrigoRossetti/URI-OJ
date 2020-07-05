#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x, flag = 1, total = 0;
    cin >> n >> m;
    while (n--) {
        for (int i = 0; i < m; i++) {
            cin >> x;
            if (x <= 0) flag = 0;
        }
        flag ? total++ : flag = 1;
    }
    cout << total << endl;
    return 0;
}