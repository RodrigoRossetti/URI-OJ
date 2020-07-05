#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    string s;
    while (cin >> s && s != "-1") {
        if (s[1] == 'x') {
            stringstream str;
            str << s;
            str >> std::hex >> n;
            printf("%d\n", n);
        }
        else printf("0x%X\n", stoi(s));
    }
    return 0;
}