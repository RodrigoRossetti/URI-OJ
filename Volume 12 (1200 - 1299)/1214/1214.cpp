#include <bits/stdc++.h>
using namespace std;

int main() {
    int c, n, x, acima;
    double media;
    vector<int> v;
    cin >> c;
    while (c--) {
        v.clear();
        acima = media = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
            media += x;
        }
        media /= n;
        for (int i = 0; i < n; i++) {
            if (v[i] > media) acima++;
        }
        printf("%.3lf%%\n", ((double)acima/n)*100);
    }
    return 0;
}