#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        sort(s.begin(), s.end());
        do {
           for (char c : s) cout << c;
           cout << endl;
        } while (next_permutation(s.begin(), s.end()));
       cout << endl;
    }
    return 0;
}