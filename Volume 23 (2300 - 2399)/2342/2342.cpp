#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, max, total;
    char c;
    cin >> max;
    cin >> a >> c >> b;
    if (c == '+') total = a+b;
    if (c == '*') total = a*b;
    if (total <= max) cout << "OK\n";
    else cout << "OVERFLOW\n";
    return 0;
}