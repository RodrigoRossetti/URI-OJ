#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, max, alf[26];
    string s;
    cin >> n >> ws;
    while(n--) {
        memset(alf, 0, sizeof(alf));
        getline(cin, s);
        for (int i = 0; i < s.length(); i++) {
            c = s[i];
            if (c >= 'A' && c <= 'Z') alf[c - 'A']++;
            else if (c >= 'a' && c <= 'z') alf[c - 'a']++;
        }
        max = *max_element(begin(alf), end(alf));
        for (int i = 0; i < 26; i++)
            if (alf[i] == max) cout << char(i +'a');
        cout << endl;
    }
    return 0;
}
