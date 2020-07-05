#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    unordered_set<int> s;
    cin >> t;
    while (t--) {
        s.clear();
        cin >> n;
        while (n--) {
            cin >> x;
            s.emplace(x);
        }
        cout << s.size() << endl;
    }
    return 0;
}