#include <bits/stdc++.h>
using namespace std;

int main() {
    int l, n;
    string s1, s2;
    map<string, string> m;
    cin >> l >> n;
    while (l--) {
        cin >> s1 >> s2;
        m[s1] = s2;
    }
    while (n--) {
        cin >> s1;
        if (m[s1].length() > 0)
            cout << m[s1] << endl;
        else if (s1[s1.length()-1] == 'y' && (s1[s1.length()-2] != 'a' && s1[s1.length()-2] != 'e' && s1[s1.length()-2] != 'i' && s1[s1.length()-2] != 'o' && s1[s1.length()-2] != 'u'))
            cout << s1.replace(s1.length()-1, 3, "ies") << endl;
        else if (s1[s1.length()-1] =='o' || s1[s1.length()-1] =='x' || s1[s1.length()-1] =='s' || (s1[s1.length()-2] =='c' && s1[s1.length()-1] =='h') || (s1[s1.length()-2] =='s' && s1[s1.length()-1] =='h'))
            cout << s1 << "es" << endl;
        else cout << s1 << "s" << endl;
    }
    return 0;
}