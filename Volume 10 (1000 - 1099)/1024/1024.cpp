#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s, fim;
    cin >> n >> ws;
    while (n--) {
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) if (isalpha(s[i])) s[i] += 3;
        reverse(s.begin(), s.end());
        for (int i = trunc(s.length()/2); i < s.length(); i++) s[i] -= 1;
        cout << s << endl;
    }
    return 0;
}