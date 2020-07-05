#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, total = 0;
    string s, k = "0";
    cin >> n;
    while (n--) {
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                k += s[i];
            }
            else {
                total += stoi(k);
                k = "0";
            }
        }
        total += stoi(k);
        k = "0";
        cout << total << endl;
        total = 0;
    }
    return 0;
}