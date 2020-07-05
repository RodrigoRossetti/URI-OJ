#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    if (a == b || b == c || a == c) cout << "Empate\n";
    else if (a < b && a < c) cout << "Otavio\n";
    else if (b < a && b < c) cout << "Bruno\n";
    else if (c < a && c < b) cout << "Ian\n";   
}