#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q, k, total;
    while(cin >> n && n) {
        total = 0;
        while(1) {
            k = 1;
            for(int i = 1; i <= n; i++) {
                cin >> q;
                if(q != i) k = 0;
            }
            total++;
            if(k) break;
        }
        cout << total << endl;
    }
    return 0;
}