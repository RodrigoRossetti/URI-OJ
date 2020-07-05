#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, orig;
    priority_queue<string> pq;
    map<string, string> m;
    while (getline(cin, s)) {
        orig = s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        m[s] = orig;
        pq.push(s);
    }
    cout << m[pq.top()] << endl;
    return 0;
}
