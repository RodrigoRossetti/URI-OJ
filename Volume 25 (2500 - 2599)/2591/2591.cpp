#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, pos, a, b;
    string s;
    cin >> n >> ws;
    while (n--) {
        a = b = 0;
        getline(cin, s);
        for (int i = 1; ; i++) {
            if (s[i] != 'a') {
                pos = i;
                break;
            }
            else a++;
        }
        for (int i = pos+3; ; i++) {
            if (s[i] != 'a') break;
            else b++;
        }
        cout << 'k';
        for (int i = 0; i < b*a; i++) cout << 'a';
        cout << endl;
    }
    return 0;
}