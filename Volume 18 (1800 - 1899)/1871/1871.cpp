#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    string s;
    while (1) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;
        s = to_string(a+b);
        for(int i = 0; i < s.length(); i++)
            if (s[i] != '0')
                cout << s[i];
        cout << endl;
    }
    return 0;
}