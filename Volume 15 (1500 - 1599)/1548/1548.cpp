#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, k, x, total;
    queue<int> q;
    priority_queue<int> s;
    cin >> n;
    while (n--) {
        total = 0;
        cin >> k;
        while (k--) {
            cin >> x;
            q.push(x);
            s.push(x);
        }
        while (!q.empty()) {
            if (q.front() == s.top()) total++;
            q.pop();
            s.pop();
        }
        cout << total << endl;
    }
    return 0;
}