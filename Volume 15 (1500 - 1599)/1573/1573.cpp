#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, v;
    while (1) {
        cin >> a >> b >> c;
        if (a == 0 & b == 0 && c == 0) break;
        v = a*b*c;
        cout << int(cbrt(v)) << endl;
    }
    return 0;
}