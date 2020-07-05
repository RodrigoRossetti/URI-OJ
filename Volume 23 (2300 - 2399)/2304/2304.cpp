#include<bits/stdc++.h>
using namespace std;

int main(){
    long i, n, x, i1, i2;
    char c1, c2, c3;
    cin >> i >> n;
    long din[3] = {i, i, i};
    while (n--) {
        cin >> c1;
        if (c1 == 'C') {
            cin >> c2 >> x;
            if (c2 == 'D') din[0] -= x;
            else if (c2 == 'E') din[1] -= x;
            else if (c2 == 'F') din[2] -= x;
        }
        else if (c1 == 'V') {
            cin >> c2 >> x;
            if (c2 == 'D') din[0] += x;
            else if (c2 == 'E') din[1] += x;
            else if (c2 == 'F') din[2] += x;
        }
        else if (c1 == 'A') {
            cin >> c2 >> c3 >> x;
            if (c2 == 'D') i1 = 0;
            else if (c2 == 'E') i1 = 1;
            else if (c2 == 'F') i1 = 2;
            if (c3 == 'D') i2 = 0;
            else if (c3 == 'E') i2 = 1;
            else if (c3 == 'F') i2 = 2;
            din[i1] += x;
            din[i2] -= x;
        }
    }
    cout << din[0] << ' ' << din[1] << ' ' << din[2] << endl;
    return 0;
}