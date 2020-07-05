#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> n;
    for (int i = 1; i < n; i++) {
        cin >> x;
        pq.push(x);
    }
    for (int i = 1; i <= n; i++) {
        if (pq.top() != i) {
            x = i;
            break;
        }
        else pq.pop();
    }
    cout << x << endl;
    return 0;
}