#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, max = 0;
    cin >> a >> b >> c;
    a /= 2;
    b /= 3;
    c /= 5;
    if (a <= b && a <= c) max = a;
    else if (b <= a && b <= c) max = b;
    else if (c <= a && c <= b) max = c;
    cout << max << endl;
    return 0;
}