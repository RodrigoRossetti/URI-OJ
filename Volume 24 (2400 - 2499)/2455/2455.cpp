#include<bits/stdc++.h>
using namespace std;

int main(){
    int p1, c1, p2, c2, t1, t2;
    cin >> p1 >> c1 >> p2 >> c2;
    t1 = p1 * c1;
    t2 = p2 * c2;
    if (t1 == t2) cout << 0 << endl;
    else if (t2 > t1) cout << 1 << endl;
    else cout << -1 << endl;
    return 0;
}