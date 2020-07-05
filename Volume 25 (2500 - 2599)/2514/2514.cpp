#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int m, mmc, l1, l2, l3;
    while (cin >> m) {
        cin >> l1 >> l2 >> l3;
        mmc = (l1*l2/__gcd(l1, l2)*l3)/__gcd(l1*l2/__gcd(l1, l2), l3);
        cout << mmc - m << endl;
    }
    return 0;
}