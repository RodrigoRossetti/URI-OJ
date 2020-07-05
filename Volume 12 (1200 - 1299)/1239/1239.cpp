#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 0, y = 0;
    string s;
    while (getline(cin, s)) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '_' && x == 0) {
                x = 1;
                s.replace(i, 1, "<i>");
            }
            else if (s[i] == '_' && x == 1) {
                x = 0;
                s.replace(i, 1, "</i>");
            }
            if (s[i] == '*' && y == 0) {
                y = 1;
                s.replace(i, 1, "<b>");
            }
            else if (s[i] == '*' && y == 1) {
                y = 0;
                s.replace(i, 1, "</b>");
            }
        }
        cout << s << endl;
    }
    return 0;
}