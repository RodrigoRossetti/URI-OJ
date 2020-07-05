#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, atual = 0, total = 0;
    vector<int> v;
    cin >> n;
    while (n--) {
        cin >> x;
        total += x;
        v.push_back(x);
    }
    total /= 2;
    for (int i = 1; i <= v.size(); i++) {
        atual += v[i-1];
        if (atual == total) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}