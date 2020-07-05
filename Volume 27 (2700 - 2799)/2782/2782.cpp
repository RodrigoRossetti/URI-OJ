#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, atual, total = 1;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    if(n <= 2) {
        cout << 1 << endl;
        return 0;
    }
    atual = v[0]-v[1];
    for (int i = 1; i < v.size() - 1; i++) {
        if (v[i]-v[i+1] != atual) {
            atual = v[i]-v[i+1];
            total++;
        }
    }
    cout << total << endl;
    return 0;
}
