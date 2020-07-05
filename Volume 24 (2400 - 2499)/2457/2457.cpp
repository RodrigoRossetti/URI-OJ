#include <bits/stdc++.h>
using namespace std;

int main() {
    int flag = 1, total = 1, letras = 0;
    char c;
    string s;
    cin >> c >> ws;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i-1] == ' ') total++, flag = 1;
        if (s[i] == c && flag) letras++, flag = 0;
    }
    printf("%.1lf\n", (double)letras/total*100);
    return 0;
}