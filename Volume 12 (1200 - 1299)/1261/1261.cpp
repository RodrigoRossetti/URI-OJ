#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    long long m, n, x, total;
    string s;
    map<string, long long> map;
    cin >> m >> n;
    while (m--) {
        cin >> s >> x;
        map[s] = x;
    }
    while (n--) {
        total = 0;
        while (cin >> s && s != ".") {
            total += map[s];
        }
        cout << total << endl;
    }
    return 0;
}