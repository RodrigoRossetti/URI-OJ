#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, v, a, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> v >> a;
        vector<vector<bool>> adj(v, vector<bool>(v));
        int total = 0;
        while (a--) {
            cin >> x >> y;
            if (!adj[x][y]) {
                adj[x][y] = adj[y][x] = 1;
                total += 2;
            }
        }
        cout << total << endl;
    }
    return 0;
}