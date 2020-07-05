#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    priority_queue<int> pq;
    cin >> a >> b >> c;
    pq.push(a), pq.push(b), pq.push(c);
    pq.pop();
    cout << pq.top() << endl;
    return 0;
}