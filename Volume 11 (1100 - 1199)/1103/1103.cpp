#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1, h2, hf, m1, m2, mf, total = 0;
    while (1) {
        cin >> h1 >> m1 >> h2 >> m2;
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;
        if (h1 == h2 && m2 < m1)
            hf = 24;
        else if (h2 < h1) {
            h2 += 24;
            hf = h2 - h1;
        }
        else hf = h2 - h1;
        if (m2 < m1) {
            hf -= 1;
            m2 += 60;
        }
        mf = m2 - m1;
        total = 60*hf+mf;
        if (m1 == m2 && h1 == h2) cout << 1440 << endl;
        else cout << total << endl;
        total = 0;
    }
    return 0;
}