#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> ws;
    while (n--) {
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            if (i < s.length()-8 && s[i+1] == 'o' && s[i+2] == 'u' && s[i+3] == 'l' && s[i+4] == 'u'
            && s[i+5] == 'p' && s[i+6] == 'u' && s[i+7] == 'k' && s[i+8] == 'k') s[i] = 'J';
            if (i > 7 && s[i-1] == 'k' && s[i-2] == 'k' && s[i-3] == 'u' && s[i-4] == 'p'
            && s[i-5] == 'u' && s[i-6] == 'l' && s[i-7] == 'u' && s[i-8] == 'o') s[i] = 'i';
        }
        cout << s << endl;
    }
    return 0;
}