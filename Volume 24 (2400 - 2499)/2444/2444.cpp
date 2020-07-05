#include<bits/stdc++.h>
using namespace std;

int main(){
    int v, t, c;
    cin >> v >> t;
    while (t--) {
        cin >> c;
        v += c;
        if (v < 0)
            v = 0;
        if (v > 100)
            v = 100;
    }
    cout << v << endl;
    return 0;
}