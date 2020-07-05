#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    cin >> n;
    cin.ignore();
    while (n--) {
        getline(cin, s);
        if (((s[0] == 'o' && s[1] == 'n')||(s[1] == 'n' && s[2] == 'e')||(s[0] == 'o' && s[2] == 'e'))&&s.length()==3)
            cout << "1\n";
        else if (((s[0] == 't' && s[1] == 'w')||(s[1] == 'w' && s[2] == 'o')||(s[0] == 't' && s[2] == 'o'))&&s.length()==3)
            cout << "2\n";
        else if (((s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[3] == 'e')||(s[0] == 't' && s[1] == 'h' && s[2] == 'r' && s[4] == 'e')||(s[0] == 't' && s[1] == 'h' && s[3] == 'e' && s[4] == 'e')||(s[0] == 't' && s[2] == 'r' && s[3] == 'e' && s[4] == 'e')||(s[1] == 'h' && s[2] == 'r' && s[3] == 'e' && s[4] == 'e'))&&s.length()==5)
            cout << "3\n";
    }
    return 0;
}