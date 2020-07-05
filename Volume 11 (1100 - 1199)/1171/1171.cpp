#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, total = 0;
    priority_queue<int, vector<int>, greater<int>> p;
    cin >> n;
    while(n--) {
        cin >> x;
        p.push(x);
    }
    while (!p.empty()) {
        if (total == 0) {
            x = p.top();
            cout << x << " aparece ";
            total++;
            p.pop();
        }
        else if (x == p.top()) {
            total++;
            p.pop();
        }
        else {
            cout << total << " vez(es)\n";
            total = 0;
        }
    }
    cout << total << " vez(es)\n";
    return 0;
}