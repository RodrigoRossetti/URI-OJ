#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k = 0;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        if (s[0] == 'R' && s[1] == 'A' && s.length() == 20) {
            for (int i = 2; i < s.length(); i++)
                if (k == 1) cout << s[i];
                else if (s[i] != '0' && k == 0) {
                    cout << s[i];
                    k = 1;
                }
            cout << endl;
            k = 0;
        }
        else cout << "INVALID DATA\n";
    }
    return 0;
}