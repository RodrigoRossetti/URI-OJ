#include <bits/stdc++.h> 
using namespace std;

int main() {
    int c, n, aux1, aux2;
    vector<int> x, y;
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> dist;
    cin >> c;
    while (c--) {
        x.clear(), y.clear();
        dist = priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>>();
        cin >> n;
        for (int i = 0; i < n+1; i++) {
            cin >> aux1 >> aux2;
            x.push_back(aux1);
            y.push_back(aux2);
        }
        for (int i = 1; i <= n; i++) {
            int a = abs(x[0]-x[i]), b = abs(y[0]-y[i]);
            double dif = sqrt(a*a+b*b);
            dist.push(make_pair(dif, i));
        }
        cout << dist.top().second << endl;
    }
    return 0;
}