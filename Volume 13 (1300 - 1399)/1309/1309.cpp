#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int c;
    string dolares, centavos;
    while (cin >> dolares) {
        c = 0;
        cin >> centavos;
        cout << '$';
        for (int i = dolares.length()-1; i >= 0; i--) {
            if (c == 3) {
                c = 0;
                dolares.insert(dolares.begin()+i+1, ',');
            }
            c++;
        }
        cout << dolares;
        if (centavos.length() == 1) cout << ".0" << centavos << endl;
        else cout << '.' << centavos << endl;
    }
    return 0;
}