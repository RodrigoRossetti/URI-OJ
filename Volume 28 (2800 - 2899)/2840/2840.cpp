#include<bits/stdc++.h>
using namespace std;

int main(){
    double r, gas, v;
    cin >> r >> gas;
    v = (4 * 3.1415 * r * r * r)/3;
    cout << floor(gas/v) << endl;
    return 0;
}