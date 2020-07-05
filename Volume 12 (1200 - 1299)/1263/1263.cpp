#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 1, total = 0;
    char c;
    string s;
    while (getline(cin,s)) {
        c = tolower(s[0]);
        for(int i = 1; i < s.length(); i++) {
            if (c == tolower(s[i]) && s[i-1] == ' ' && n == 1) {
                total++;
                n = 0;
            }
            if (c != tolower(s[i]) && s[i-1] == ' ') {
                c = tolower(s[i]);
                n = 1;
            }
        }
        cout << total << endl;
        total = 0;
        n = 1;
    }
    return 0;
}