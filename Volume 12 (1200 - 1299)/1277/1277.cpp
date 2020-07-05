#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, total, faltas, flag;
    string aux, s1, s2, nome, presencas;
    cin >> t;
    while (t--) {
        flag = 1;
        s1 = s2 = "";
        cin >> n >> ws;
        getline(cin, s1);
        getline(cin, s2);
        stringstream c1(s1), c2(s2);
        while (c1 >> nome) {
            total = faltas = 0;
            c2 >> presencas;
            for (int i = 0; i < presencas.length(); i++) {
                if (presencas[i] == 'A') total++, faltas++;
                else if (presencas[i] == 'P') total++;
            }
            if ((double)faltas/total > 0.25) {
                if (flag == 0) printf(" ");
                cout << nome;
                flag = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
