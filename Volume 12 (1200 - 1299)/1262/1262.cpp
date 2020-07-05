#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, k = 0, total = 0;
    string s;
    while (getline(cin,s)) {
        cin >> n;
        cin.ignore();
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'R') {
                if (k == 0) total++;
                if (s[i+1] == 'R') k++;
                if (k == n || s[i+1] == 'W') k = 0;
            }
            else if (s[i] == 'W') total++;
        }
        cout << total << endl;
        k = total = 0;
    }
    return 0;
}