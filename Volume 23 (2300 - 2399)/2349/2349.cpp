#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, s, x, total, pos = 1;
    cin >> n >> c >> s;
    s == 1 ? total = 1 : total = 0;
    while(c--) {
        cin >> x;
        pos += x;
        if (pos > n) pos -= n;
        else if (pos < 1) pos += n;
        if (pos == s) total++;
    }
    cout << total << endl;
    return 0;
}