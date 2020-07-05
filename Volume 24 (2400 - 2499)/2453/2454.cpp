#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, aux;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p') i++;
        aux += s[i];
    }
    cout << aux << endl;
    return 0;
}