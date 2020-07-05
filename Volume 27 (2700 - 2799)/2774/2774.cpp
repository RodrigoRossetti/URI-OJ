#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    while (cin >> h >> m) {
        vector<double> v;
        v.clear();
        double soma = 0, x;
        int k = (h*60)/m;
        for (int i = 0; i < k; i++) {
            cin >> x;
            soma += x;
            v.push_back(x);
        }
        double media = (double)soma/k, soma2 = 0;
        for (int i = 0; i < v.size(); i++) soma2 += pow(v[i]-media, 2);
        printf("%.5lf\n", sqrt((double)soma2/(k-1)));
    }
    return 0;
}