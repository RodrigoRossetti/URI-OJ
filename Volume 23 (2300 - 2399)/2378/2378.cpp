#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, a, b, flag = 0, total = 0;
    cin >> n >> c;
    while (n--) {
        cin >> a >> b;
        total -= a;
        total += b;
        if (total < 0) total = 0;
        if (total > c) flag = 1;
    }
    cout << (flag ? "S" : "N") << endl;
    return 0;
}