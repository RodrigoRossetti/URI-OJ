#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, m, c, min = 1000, k = 0;
    cin >> n;
    while (n--) {
        cin >> m >> x;
        int a[m];
        for (int i = 0; i < m; i++) {
            cin >> c;
            if (abs(x-c) < min) {
                k = i+1;
                min = abs(x-c);
            }
        }
        cout << k << endl;
        min = 1000;
        k = 0;
    }
    return 0;
}