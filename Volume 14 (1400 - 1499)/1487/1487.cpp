#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, t, k, it, total, count = 1, d[101] = {0}, p[101] = {0};
    priority_queue<int> pr;
    map<int, int, std::greater<int> > m;
    while (cin >> n >> t && n && t) {
        m.clear();
        total = 0;
        for (int i = 0; i < n; i++) {
            cin >> d[i] >> p[i];
            m.insert(make_pair((double)p[i]/d[i], i));
            pr.push((double)p[i]/d[i]);
        }
        while (!pr.empty()) {
            k = pr.top();
            pr.pop();
            it = m[k];
            while (t - d[it] >= 0) {
                t -= d[it];
                total += p[it];
            }
        }
        printf("Instancia %d\n", count);
        cout << total << endl << endl;
        count++;
    }
    return 0;
}