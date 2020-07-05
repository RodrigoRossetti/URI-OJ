#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b, e;
    string s;
    cin >> n;
    while (n--) {
        s = "";
        cin >> b >> e;
        for (int i = b; i <= e; i++) s += to_string(i);
        for (int i = s.length()-1; i >= 0; i--) s += s[i];
        cout << s << endl;
    }
    return 0;
}