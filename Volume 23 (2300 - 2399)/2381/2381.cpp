#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    string s;
    priority_queue<string> pq;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> s;
        pq.push(s);
    }
    for (int i = 0; i < abs(n-k); i++) pq.pop();
    cout << pq.top() << endl;
    return 0;
}