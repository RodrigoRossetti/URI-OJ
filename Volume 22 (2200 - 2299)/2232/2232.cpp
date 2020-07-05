#include<bits/stdc++.h>
using namespace std;

int main(){
    long t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long k = pow(2, n);
        cout << k - 1 << endl;
    }
    return 0;
}