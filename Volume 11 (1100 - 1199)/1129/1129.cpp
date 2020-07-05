#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, x, key, brancas, pretas;
    while (1) {
        cin >> n;
        if (n == 0) break;
        while (n--) {
            brancas = pretas = 0;
            for (int i = 0; i < 5; i++) {
                cin >> x;
                if (x <= 127) {
                    pretas++;
                    key = i;
                }
                else if (x > 127) {
                    brancas++;
                }
            }
            if (pretas > 1 || brancas > 4) cout << "*\n";
            else cout << char(key+65) << endl;
        }
    }
    return 0;
}