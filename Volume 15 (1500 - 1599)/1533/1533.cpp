#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    map<int, int, greater<int>> m;
    priority_queue<int> pr;
    while (cin >> n && n) {
        m.clear();
        pr = priority_queue <int>();
        for (int i = 1; i <= n; i++) {
            cin >> x;
            pr.push(x);
            m[x] = i;
        }
        pr.pop();
        cout << m[pr.top()] << endl;
    }
    return 0;
}