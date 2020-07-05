#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    while (cin >> t) {
        vector<int> x, y, z;
        x.clear(), y.clear(), z.clear();
        int a, b, c;
        char lixo;
        for (int i = 0; i < t; i++) {
            cin >> a >> b >> lixo >> c;
            x.push_back(a), y.push_back(b), z.push_back(c);
        }
        string s;   
        int k;
        char ch;
        priority_queue<string, vector<string>, greater<string>> pq = priority_queue<string, vector<string>, greater<string>>();
        fflush(stdin);
        for (int i = 0; i < t; i++) {
            cin >> s >> k >> ch;
            if (ch == '+' && x[k-1] + y[k-1] != z[k-1]) pq.push(s);
            else if (ch == '-' && x[k-1] - y[k-1] != z[k-1]) pq.push(s);
            else if (ch == '*' && x[k-1] * y[k-1] != z[k-1]) pq.push(s);
            else if (ch == 'I' && (x[k-1] + y[k-1] == z[k-1] || x[k-1] - y[k-1] == z[k-1] || x[k-1] * y[k-1] == z[k-1])) pq.push(s);
        }
        if (pq.size() == 0) printf("You Shall All Pass!\n");
        else if (pq.size() == t) printf("None Shall Pass!\n");
        else {
            while (!pq.empty()) {
                pq.size() == 1 ? cout << pq.top() : cout << pq.top() << " ";
                pq.pop();
            }
            cout << endl;
        }
    }
    return 0;
}