#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s, p;
    cin >> n;
    while (n--) {
        cin >> s;
        p = "";
        for (int i = 0; i < s.length(); i++)
            if (!isupper(s[i]))
                p += s[i];
        for (int j = p.length() - 1; j >= 0; j--)
            cout << p[j];
        cout << endl;
    }
    return 0;
}