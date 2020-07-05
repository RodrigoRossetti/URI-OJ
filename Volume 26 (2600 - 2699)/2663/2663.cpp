#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, x, atual = INT_MAX, total = 0;
    cin >> n >> k;
    priority_queue<int> p;
    while (n--) {
        cin >> x;
        p.push(x);
    }
    while (k) {
        atual = p.top();
        p.pop();
        k--;
        total++;
    }
    while (atual == p.top() && !p.empty()) {
        total++;
        p.pop();
    }
    cout << total << endl;
    return 0;
}