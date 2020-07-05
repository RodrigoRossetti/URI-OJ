#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, v, total = 0;
    cin >> n;
    while (n--) {
        cin >> t >> v;
        total += t*v;
    }
    cout << total << endl;
    return 0;
}