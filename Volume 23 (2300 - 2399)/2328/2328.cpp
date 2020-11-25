#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        total += x-1;
    }
    cout << total << endl;
    return 0;
}