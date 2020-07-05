#include<bits/stdc++.h>
using namespace std;

int main() {
    int x, y, p, k;
    while (cin >> x >> y) {
        p = 2*x + 2*y;
        k = __gcd(x, y);
        cout << p/k << endl;
    }
    return 0;
}