#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, f1, f2;
    bool primo[100001];
    memset(primo, true, sizeof(primo)); 
    for (int p = 2; p*p <= 100001; p++) 
        if (primo[p] == true) 
            for (int i = p*p; i <= 100001; i += p) 
                primo[i] = false; 
    primo[0] = primo[1] = primo[4] = primo[6] = primo[8] = primo[9] = false;
    while (cin >> n) {
        f1 = 0;
        f2 = 1;
        if (primo[n] == true) f1 = 1;
        string k = to_string(n);
        for (int i = 0; i < k.length(); i++) 
            if (k[i]-'0' == 0 || k[i]-'0' == 1 || k[i]-'0' == 4 || k[i]-'0' == 6 || k[i]-'0' == 8 || k[i]-'0' == 9) f2 = 0;
        if (f1 && f2) cout << "Super\n";
        else if (f1) cout << "Primo\n";
        else cout << "Nada\n";
    }
    return 0;
}