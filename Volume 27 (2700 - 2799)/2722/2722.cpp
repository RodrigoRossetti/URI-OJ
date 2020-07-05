#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s1, s2;
    cin >> n >> ws;
    while (n--) {
        getline(cin, s1);
        getline(cin, s2);
        for (int i = 0; i < s1.length(); i += 2) {
            cout << s1[i] << s1[i+1] << s2[i];
            if (!(i == s1.length()-2 && s2.length() < s1.length())) cout << s2[i+1];
        }
        cout << endl;
    }
    return 0;
}