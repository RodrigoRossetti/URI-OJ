#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, m, xi, yi;
    while (cin >> x >> y >> m) {
        while (m--) {
            cin >> xi >> yi;
            if ((xi <= x && yi <= y) || (xi <= y && yi <= x)) cout << "Sim\n";
            else cout << "Nao\n";
        }
    }
    return 0;
}