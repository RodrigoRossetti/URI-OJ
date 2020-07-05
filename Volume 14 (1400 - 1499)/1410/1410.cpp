#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, d, x, flag;
    priority_queue<int, vector<int>, greater<int>> p1, p2;
    while (cin >> a >> d && a && d) {
        flag = 0;
        p1 = priority_queue<int, vector<int>, greater<int>>();
        p2 = priority_queue<int, vector<int>, greater<int>>();
        while (a--) {
            cin >> x;
            p1.push(x);
        }
        while (d--) {
            cin >> x;
            p2.push(x);
        }
        p2.pop();
        x = p2.top();
        while (!p1.empty()) {
            if (p1.top() < x) flag = 1;
            p1.pop();
        }
        cout << (flag ? "Y\n" : "N\n");
    }
    return 0;
}