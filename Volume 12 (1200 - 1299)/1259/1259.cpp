#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    priority_queue<int, vector<int>, greater<int> > p1;
    priority_queue<int> p2;
    cin >> n;
    while (n--) {
        cin >> x;
        x % 2 == 0 ? p1.push(x) : p2.push(x);
    }
    while (!p1.empty()) {
        cout << p1.top() << endl;
        p1.pop();
    }
    while (!p2.empty()) {
        cout << p2.top() << endl;
        p2.pop();
    }
    return 0;
}