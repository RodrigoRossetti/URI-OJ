#include <bits/stdc++.h>
using namespace std;

int main() {
    int b, n, d, c, v;
    while(cin >> b >> n && n && b) {
        int flag = 1, bank[21] = {0};
        for(int i = 1; i <= b; i++) cin >> bank[i];
        while (n--) {
            cin >> d >> c >> v;
            bank[d] -= v;
            bank[c] += v;
        }
        for(int i = 1; i <= b; i++) {
            if (bank[i] < 0) flag = 0;
            bank[i] = 0;
        }
        flag ? cout << "S\n" : cout << "N\n";
    }
    return 0;
}