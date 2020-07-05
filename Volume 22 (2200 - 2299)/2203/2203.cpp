#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, x2, y1, y2, r1, r2, rf, v;
    while(cin >> x1 >> y1 >> x2 >> y2 >> v >> r1 >> r2) {
        rf = r1+r2;
        double distancia = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)) + (v*1.5);
        if(distancia <= rf)
            cout << "Y" << endl;
        else
            cout << "N" << endl;

    }
    return 0;
}