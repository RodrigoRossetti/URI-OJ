#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    while(cin >> n >> m && n && m) {
        int a[10001] = {0}, total = 0;
        while (m--) {
            cin >> x;
            a[x-1]++;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] > 1) {
                total++;
                a[i] = 0;
            }
        }
        cout << total << endl;
    }
}