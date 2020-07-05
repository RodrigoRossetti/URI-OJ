#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    if (b/a >= c)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}