#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    int n;
    while (cin >> n) {
        while (n--) {
            cin >> s;
            int x = 0, ind = 0;
            for (int i = s.length()-1; i >= 0; i--) {
                if (s[i] == '1') x += pow(2, ind);
                ind++;
            }
            cout << char(x);
        }
        cout << endl;
    }
    return 0;
}