#include<bits/stdc++.h>
using namespace std;

int main(){
    double p1, p2, r1, r2;
    cin >> p1 >> p2 >> r1 >> r2;
    if (r1/p1 > r2/p2) cout << "A\n";
    else cout << "G\n";
    return 0;
}