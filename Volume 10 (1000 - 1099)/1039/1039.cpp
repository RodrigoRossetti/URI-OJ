#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int r1, x1, y1, r2, x2, y2;
    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2) {
        long double dist = hypotl(labs(x1)-labs(x2), labs(y1)-labs(y2));
        //cout << dist << " " << abs(r1-r2) << endl;
        if(dist<=labs(r1-r2))
            cout<<"RICO"<<endl;
        else
            cout<<"MORTO"<<endl;
    }
    return 0;
}