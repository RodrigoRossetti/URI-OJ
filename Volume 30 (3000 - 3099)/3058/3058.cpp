#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, g;
    double total = 0, p;
    priority_queue<double, vector<double>, greater<double>> pq;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lf %d", &p, &g);
        pq.push(p/g);
    }
    total = (pq.top()*1000);
    printf("%.2lf\n", total);
    return 0;
}