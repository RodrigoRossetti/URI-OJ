#include<bits/stdc++.h>
using namespace std;

int main(){
    int c1, c2, c3, f1, f2, f3, p1, p2;
    cin >> c1 >> c2 >> c3 >> f1 >> f2 >> f3;
    p1 = c1*3 + c2*1;
    p2 = f1*3 + f2*1;
    if (p1 > p2 || (p1 == p2 && c3 > f3)) cout << "C\n";
    else if (p2 > p1 || (p1 == p2 && f3 > c3)) cout << "F\n";
    else cout << "=\n";
    return 0;
}