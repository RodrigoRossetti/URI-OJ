#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    while (n--) {
        cin >> x >> y;
        double r = pow((3*x), 2) + pow(y, 2);
        double b = 2*pow(x, 2) + pow((5*y), 2);
        double c = -100*x + pow(y, 3);
        if (r > b && r > c) cout << "Rafael ganhou\n";
        else if (b > r && b > c) cout << "Beto ganhou\n";
        else if (c > r && c > b) cout << "Carlos ganhou\n";
    }
    return 0;
}