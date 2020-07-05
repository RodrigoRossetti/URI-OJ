#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    while (getline(cin,s)) {
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i]) && s[i] > 77)
                s[i] -= 13;
            else if (isupper(s[i]) && s[i] <= 77)
                s[i] += 13;
            else if (islower(s[i]) && s[i] > 109)
                s[i] -= 13;
            else if (islower(s[i]) && s[i] <= 109)
                s[i] += 13;
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}