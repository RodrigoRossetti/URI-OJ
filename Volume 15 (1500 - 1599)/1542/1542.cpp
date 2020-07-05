#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, d, p, pag;
    while(cin >> q && q) {
        cin >> d >> p;
        pag = (((double)(q*d)/-(q-p))+d)*q;
        if (pag == 1) cout << "1 pagina\n";
        else cout << pag << " paginas\n";
    }
    return 0;
}
