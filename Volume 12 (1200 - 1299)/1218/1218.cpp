#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, par, f, m, i = 1, flag;
    string s, p;
    while (cin >> n >> ws) {
        flag = 0;
        par = f = m = 0;
        getline(cin, s);
        stringstream c(s);
        while (c >> p) {
            if (flag) {
                flag = 0;
                if (p == "F") f++;
                else if (p == "M") m++;
            }
            else if (p != "F" && p != "M" && !flag && stoi(p) == n) par++, flag = 1;
        }
        if (i > 1) printf("\n");
        printf("Caso %d:\n", i);
        printf("Pares Iguais: %d\n", par);
        printf("F: %d\n", f);
        printf("M: %d\n", m);
        i++;
    }
    return 0;
}