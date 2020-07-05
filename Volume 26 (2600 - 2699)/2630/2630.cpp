#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    double r, g, b;
    string s;
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> s >> r >> g >> b;
        printf("Caso #%d: ", i);
        if (s == "min") cout << min(min(r, g), b) << endl;
        else if (s == "max") cout << max(max(r, g), b) << endl;
        else if (s == "mean") cout << floor((r+g+b)/3) << endl;
        else if (s == "eye") cout << floor(0.3*r+0.59*g+0.11*b) << endl;
    }
    return 0;
}