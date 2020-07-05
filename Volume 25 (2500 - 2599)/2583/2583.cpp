#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, n;
    string s1, s2;
    priority_queue<string, vector<string>, greater<string>> pq;
    map<string, int> m;
    cin >> c;
    while (c--) {
        m.clear();
        cin >> n >> ws;
        while (n--) {
            cin >> s1 >> s2;
            if (s2 == "chirrion") m[s1] = 0;
            else if (s2 == "chirrin") m[s1] = 1;
        }
        for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) 
            if (it->second == 1)
                pq.push(it->first);
        cout << "TOTAL\n";
        while (!pq.empty()) {
            cout << pq.top() << endl;
            pq.pop();
        }
    }
    return 0;
}