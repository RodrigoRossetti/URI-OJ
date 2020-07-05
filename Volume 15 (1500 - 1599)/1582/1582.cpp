#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long x, y, z, px, py, pz, mdc, flag;
    while (cin >> x >> y >> z) {
        flag = 0;
        mdc = __gcd(__gcd(x, y), z);
        px = x*x, py = y*y, pz = z*z;
        if (px == py + pz || py == px + pz || pz == px + py) flag = 1;
        if (flag && mdc == 1) cout << "tripla pitagorica primitiva" << endl;
        else if (flag) cout << "tripla pitagorica" << endl;
        else cout << "tripla" << endl;
    }
    return 0;
}