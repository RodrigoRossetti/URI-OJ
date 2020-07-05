#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 0;
    char c;
    string s;
    priority_queue<string, vector<string>, greater<string>> pq;
    cin >> n;
    while (n--) {
        cin >> c >> s;
        if (c == '+') t1++;
        else if (c == '-') t2++;
        pq.push(s);
    }
    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", t1, t2);
    return 0;
}