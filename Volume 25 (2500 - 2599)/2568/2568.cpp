#include <bits/stdc++.h>
using namespace std;

int main() {
    int d, i, x, f;
    cin >> d >> i >> x >> f;
    if (d % 2 != 0 && f % 2 != 0) cout << i+x << endl;
    else if ((d % 2 == 0 && f % 2 == 0) || (d % 2 != 0 && f % 2 == 0)) cout << i << endl;
    else if (d % 2 == 0 && f % 2 != 0) cout << i-x << endl;
    return 0;
}