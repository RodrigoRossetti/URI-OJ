#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 1e6
#define f first
#define s second

struct grafo {

    int v;
    vector<vector<pair<int, int>>> adj;

    grafo(int v) {
        this->v = v;
        adj = vector<vector<pair<int, int>>>(v);
    }

    void aresta(int u, int w, int k) {
        adj[u].push_back({w, k});
        //adj[w].push_back({u, k});
    }

    int dijkstra(int u, int d) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> dist(v, INF);
        vector<bool> vis(v, 0);
        pq.push({0, u});
        dist[u] = 0;
        while (!pq.empty()) {
            u = pq.top().s;
            pq.pop();
            vis[u] = 1;
            if (vis[d]) break;
            for (const auto& w : adj[u]) {
                if (!vis[w.f] && dist[u] + w.s < dist[w.f]) {
                    dist[w.f] = dist[u] + w.s;
                    pq.push({dist[w.f], w.f});
                }
            }
        }
        return dist[d];
    }

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(3);
    int n, m, k, a, x, o, d;
    double p;
    while (cin >> n >> m >> k >> p) {
        grafo g(n);
        vector<int> peso(n, 0);
        vector<pair<int, int>> edge(m);
        for (auto& e : edge) cin >> e.f >> e.s;
        cin >> a;
        while (a--) {
            cin >> x;
            peso[x-1]++;
        }
        for (auto& e :edge) {
            g.aresta(e.f-1, e.s-1, peso[e.s-1]);
            g.aresta(e.s-1, e.f-1, peso[e.f-1]);
        }
        cin >> o >> d;
        o--, d--;
        int total = g.dijkstra(o, d)+peso[o];
        double r = 1;
        if (total > k) r = 0;
        else while (total--) r *= p;
        cout << r << endl;
    }
    return 0;
}