#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

void print(int& n, char a, char b) {
    if (n <= 2) {
        while (n--) cout << b;
        return;
    }
    while (n >= 255) {
        cout << a << (char)255;
        n -= 255;
    }
    if (n) cout << a << (char)n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while (n--) {
        getline(cin, s);
        int espaco = 0, zero = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                print(zero, '#', '0');
                espaco++;
                zero = 0;
            }
            else if (s[i] == '0') {
                print(espaco, '$', ' ');
                zero++;
                espaco = 0;
            }
            else {
                print(espaco, '$', ' ');
                print(zero, '#', '0');
                cout << s[i];
                espaco = zero = 0;
            }
        }
        print(espaco, '$', ' ');
        print(zero, '#', '0');
        cout << endl;
    }
    return 0;
}