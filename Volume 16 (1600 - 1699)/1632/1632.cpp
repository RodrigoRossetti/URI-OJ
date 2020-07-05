#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, total = 1;
    char c;
    cin >> n;
    string s;
    while (n--) {
        cin >> s;
        for (int i = 0; i < s.length(); i++) {
            c = tolower(s[i]);
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 's') total *= 3;
            else total *= 2;
        }
        cout << total << endl;
        total = 1;
    }
    return 0;
}