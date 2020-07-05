#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c;
    char p;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        cin >> c;
        for (int i = 0; i < s.length(); i++) {
            p = s[i] - c;
            if (p < 65) p += 26;
            cout << p;
        }
        cout << endl;
    }
    return 0;
}