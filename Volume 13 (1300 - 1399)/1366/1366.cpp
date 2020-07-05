#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, v, atual, total;
    map<int, int> m;
    while (cin >> n && n) {
        atual = total = 0;
        while (n--) {
            cin >> c >> v;
            m[c] = v;
        }
        for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
            while(it->second >= 4) it->second -= 4, total++;
            if (it->second >= 2) it->second -= 2, atual += 2;
            if (atual == 4) atual = 0, total++;
        }
        if (atual == 4) atual = 0, total++;
        cout << total << endl;
    }
    return 0;
}