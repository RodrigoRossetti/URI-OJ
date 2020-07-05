#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s, fim;
    while (cin >> n >> s && n && s != "0") {
        fim.clear();
        for (int i = 0; i < s.length(); i++) {
            if (s[i] - '0' != n) fim += s[i];
        }
        fim.erase(0, min(fim.find_first_not_of('0'), fim.size()-1));
        if (fim.length() == 0) fim += '0';
        cout << fim << endl;
    }
    return 0;
}