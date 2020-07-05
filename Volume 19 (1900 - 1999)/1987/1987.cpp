#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, total;
    string s;
    while (cin >> n >> s) {
        total = 0;
        for (int i = 0; i < s.length(); i++) {
            total += s[i] - '0';
        }
        cout << total << ' ';
        total % 3 ? cout << "nao\n" : cout << "sim\n";
    }
    return 0;
}