#include<bits/stdc++.h>
using namespace std;

int main() {
    int key;
    string s;
    char c;
    while (getline(cin, s) && s != "*") {
        key = 1;
        c = tolower(s[0]);
        for (int i = 1; i < s.length(); i++)
            if (tolower(s[i]) != c && s[i-1] == ' ')
                key = 0;
        key ? cout << "Y\n" : cout << "N\n";
    }
    return 0;
}