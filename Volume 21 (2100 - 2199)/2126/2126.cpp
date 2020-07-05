#include <bits/stdc++.h>
using namespace std;

int main() {
    int total, i = 0;
    string s1, s2;
    while(cin >> s1) {
        cin >> s2;
        total = 0;
        size_t aux, pos = 0;
        while(1) {
            pos = s2.find(s1, pos);
            if (pos != string::npos) {
                total++;
                aux = pos;
                pos++;
            }
            else break;
        }
        printf("Caso #%d:\n", i+1);
        if(total == 0) printf("Nao existe subsequencia\n");
        else {
            printf("Qtd.Subsequencias: %d\n", total);
            printf("Pos: %d\n", aux+1);
        }
        cout << endl;
        i++;
    }
    return 0;
}