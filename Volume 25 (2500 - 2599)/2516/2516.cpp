#include <bits/stdc++.h> 
using namespace std;

int main() {
    int s, va, vb;
    double total;
    while (cin >> s >> va >> vb) {
        total = 0;
        if (va <= vb) {
            cout << "impossivel\n";
            continue;
        }
        total = (double)s / (va - vb);
        printf("%.2lf\n", total);
    }
    return 0;
}