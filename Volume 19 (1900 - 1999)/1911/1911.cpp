#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, dif, total;
    string s1, s2, o;
    map<string, string> ma;
    while (cin >> n && n) {
        total = 0;
        while (n--) {
            cin >> s1 >> s2;
            ma[s1] = s2;
        }
        cin >> m;
        while (m--) {
            dif = 0;
            cin >> s1 >> s2;
            o = ma[s1];
            for (int i = 0; i < o.length(); i++)
                if ((isupper(o[i]) && islower(s2[i])) || (islower(o[i]) && isupper(s2[i]))) dif++;
            if (dif > 1) total++;
        }
        cout << total << endl;
    }
    return 0;
}