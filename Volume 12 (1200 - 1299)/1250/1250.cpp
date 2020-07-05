#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n, t, x, total;
    vector<long long> v;
    string s;
    cin >> n;
    while (n--) {
        total = 0;
        v.clear();
        cin >> t;
        while (t--) {
            cin >> x;
            v.push_back(x);
        }
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'S' && v[i] <= 2) total++;
            else if (s[i] == 'J' && v[i] > 2) total++;
        }
        cout << total << endl;
    }
    return 0;
}