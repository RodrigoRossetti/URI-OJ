#include <bits/stdc++.h>
using namespace std;

int main() {
    int total, f1, f2, f3, f4;
    string s;
    while(getline(cin, s)) {
        total = f1 = f2 = f3 = f4 = 0;
        for (int i = 0; i < s.length(); i++) {
            if (!f1 && islower(s[i])) total++, f1 = 1;
            else if (!f2 && isupper(s[i])) total++, f2 = 1;
            else if (!f3 && isdigit(s[i])) total++, f3 = 1;
            else if (s.length() < 6 || s.length() > 32 || ispunct(s[i]) || isspace(s[i])) f4 = 1;
        }
        !f4 && total == 3 ? cout << "Senha valida.\n" : cout << "Senha invalida.\n";
    }
    return 0;
}