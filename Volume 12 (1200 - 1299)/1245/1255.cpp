#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, b;
    char p;
    while (cin >> n) {
        int total = 0, d[61] = {0}, e[61] = {0};
        while (n--) {
            cin >> b >> p;
            if (p == 'D') d[b]++;
            else if (p == 'E') e[b]++;
        }
        for (int i = 29; i <= 60; i++) {
            while (d[i] && e[i]) total++, d[i]--, e[i]--;
            d[i] = 0, e[i] = 0;
        }
        cout << total << endl;
    }
    return 0;
}