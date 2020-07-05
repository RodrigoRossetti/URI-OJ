#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n = 2;
    string str, str2 = "";
    while (getline(cin, str)) {
        for(int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') {
                str2 += ' ';
                continue;
            }
            if (n % 2 == 0)
                str2 += char(toupper(str[i]));
            else
                str2 += char(tolower(str[i]));
            n++;
        }
        cout << str2 << endl;
        str2 = "";
        n = 2;
    }
    return 0;
}