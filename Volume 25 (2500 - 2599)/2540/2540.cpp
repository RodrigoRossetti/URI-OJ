#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    bool voto;
    while (cin >> n) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            cin >> voto;
            if (voto) total++;
        }
        if (total >= (double)n/3*2) cout << "impeachment\n";
        else cout << "acusacao arquivada\n";
    }
    return 0;
}