#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, flag;
    string s;
    cin >> n;
    while (n--) {
        flag = 1;
        cin >> s;
        if (s.length() != 8) {
            cout << "FAILURE\n";
            flag = 0;
        }
        if (s[3] != '-' && flag) {
            cout << "FAILURE\n";
            flag = 0;
        }
        for (int i = 0; i < 3; i++) {
            if (!isupper(s[i]) && flag) {
                cout << "FAILURE\n";
                flag = 0;
            }
        }
        for (int i = 4; i < s.length(); i++) {
            if (!isdigit(s[i]) && flag) {
                cout << "FAILURE\n";
                flag = 0;
            }
        }
        if ((s[7] - '0' == 1 || s[7] - '0' == 2) && flag) cout << "MONDAY\n";
        else if ((s[7] - '0' == 3 || s[7] - '0' == 4) && flag) cout << "TUESDAY\n";
        else if ((s[7] - '0' == 5 || s[7] - '0' == 6) && flag) cout << "WEDNESDAY\n";
        else if ((s[7] - '0' == 7 || s[7] - '0' == 8) && flag) cout << "THURSDAY\n";
        else if ((s[7] - '0' == 9 || s[7] - '0' == 0) && flag) cout << "FRIDAY\n";
    }
    return 0;
}