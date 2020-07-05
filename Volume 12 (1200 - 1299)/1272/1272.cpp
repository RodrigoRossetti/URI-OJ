#include <bits/stdc++.h>
using namespace std;

inline string trim(string& str) {
    str.erase(0, str.find_first_not_of(' '));
    str.erase(str.find_last_not_of(' ')+1);
    return str;
}

int main() {
    int n;
    string s;
    cin >> n >> ws;
    while (n--) {
        getline(cin, s);
        trim(s);
        if (s.length() != 0) cout << s[0];
        for (int i = 1; i < s.length(); i++)
            if (s[i-1] == ' ' && s[i] != ' ') cout << s[i];
        cout << endl;
    }
    return 0;
}