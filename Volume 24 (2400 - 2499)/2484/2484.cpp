#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < i; j++) printf(" ");
            for (int j = 0; j < s.length()-i; j++) {
                cout << s[j];
                j == s.length()-i-1 ? printf("\n") : printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
