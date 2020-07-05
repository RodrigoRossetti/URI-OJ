#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n;
    while(n--) {
        cin >> s;
        if (s.length() == 3) {
            if (s[0] == 'O' && s[1] == 'B') cout << "OBI";
            else if (s[0] == 'U' && s[1] == 'R') cout << "URI";
            else cout << s;
        }
        else cout << s;
        if (n != 0) cout << " ";
    }
    cout << endl;
    return 0;
}