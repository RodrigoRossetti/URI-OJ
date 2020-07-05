#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, j = 1, x, ganhador;
    while (cin >> n && n) {
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x-1 == i) {
                ganhador = x;
            }
        }
        cout << "Teste " << j << endl; j++;
        cout << ganhador << endl << endl;
    }
    return 0;
}