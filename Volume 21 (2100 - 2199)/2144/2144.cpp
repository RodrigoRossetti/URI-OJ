#include<bits/stdc++.h>
using namespace std;

int main(){
    int casos = 0;
    double w1, w2, r, total = 0;
    while (cin >> w1 >> w2  >> r && w1 && w2 && r) {
        double m = ((w1 * (1 + r/30)) + (w2 * (1 + r/30)))/2;
        total += m;
        casos++;
        if (m >= 1 && m < 13) cout << "Nao vai da nao\n";
        else if (m >= 13 && m < 14) cout << "E 13\n";
        else if (m >= 14 && m < 40) cout << "Bora, hora do show! BIIR!\n";
        else if (m >= 40 && m < 60) cout << "Ta saindo da jaula o monstro!\n";
        else if (m >= 60) cout << "AQUI E BODYBUILDER!!\n";
    }
    if (total/casos) cout << "\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n";
    return 0;
}