#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, x2, x3, x4, x5, y1, y2, y3, y4, y5;
    cin >> x1 >> x2 >> x3 >> x4 >> x5 >> y1 >> y2 >> y3 >> y4 >> y5;
    if (x1+y1 == 1 && x2+y2 == 1 && x3+y3 == 1 && x4+y4 == 1 && x5+y5 == 1)
        cout << "Y\n";
    else
        cout << "N\n";
    return 0;
}