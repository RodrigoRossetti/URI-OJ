#include<bits/stdc++.h>
using namespace std;

int main(){
    int k, j = 0, z = 5, total, minj, min = pow(2, 31);
    string s, t;
    cin >> s >> k;
    while (z--) {
        ++j;
        total = 0;
        cin >> t;
        for (int i = 0; i < s.length(); i++)
            if (s[i] != t[i]) total++;
        if (total < min) {
            min = total;
            minj = j;
        }
    }
    min <= k ? cout << minj << endl << min << endl : cout << -1 << endl;
    return 0;
}