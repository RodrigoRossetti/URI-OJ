#include<bits/stdc++.h>
using namespace std;

int main(){
    int k = 1;
    string s, sf = "";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            sf += s[i];
    for (int i = 0; i < sf.length()/2; i++) {
        if (sf[i] != sf[sf.length()-i-1]) {
            k = 0;
            break;
        }
    }
    k ? cout << "S\n" : cout << "N\n";
    return 0;
}