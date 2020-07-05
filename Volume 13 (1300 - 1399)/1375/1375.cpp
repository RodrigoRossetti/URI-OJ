#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int i, key = 0, x = 0, y = n, c[n], p[n], ini[n];
        memset(ini, 0, sizeof(ini));
        for (i = 0; i < n; ++i) {
            cin >> c[i] >> p[i];
            if (p[i] >= x && p[i] < y)
                ini[i + p[i]] = c[i];
            x--;
            y--;
        }
        for (i = 0; i < n; ++i)
            if (ini[i] == 0) key = 1;
        if (key) cout << -1 << endl;
        else {
            for (i = 0; i < n-1; ++i)
                cout << ini[i] << " ";
            cout << ini[n-1] << endl; 
        }
    }
    return 0;
}