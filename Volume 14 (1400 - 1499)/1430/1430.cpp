#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int total;
    double atual;
    while (cin >> s && s != "*") {
        atual = total = 0;
        for (int i = 1; i < s.length(); i++) {
            if (s[i] != '/') {
                if (s[i] == 'W') atual += (double)1;
                else if (s[i] == 'H') atual += (double)1/2;
                else if (s[i] == 'Q') atual += (double)1/4;
                else if (s[i] == 'E') atual += (double)1/8;
                else if (s[i] == 'S') atual += (double)1/16;
                else if (s[i] == 'T') atual += (double)1/32;
                else if (s[i] == 'X') atual += (double)1/64;
            }
            else {
                if (atual == 1) total++;
                atual = 0;
            }
        }
        cout << total << endl;
    }
    return 0;
}