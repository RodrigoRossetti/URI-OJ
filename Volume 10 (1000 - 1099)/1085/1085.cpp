#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 1e6
#define f first
#define s second
#define piii pair<int, pair<int, int>>
#define graph vector<vector<piii>>

struct grafo {

    int v;
    vector<graph> adj;

    grafo(int v) {
        this->v = v;
        adj = vector<graph>(v, graph(26));
    }

    void aresta(int u, int w, int k, int c) {
        adj[u][c].push_back({k, {w, c}});
        adj[w][c].push_back({k, {u, c}});
    }

    int dijkstra(int u, int e) {
        int c, k;
        priority_queue<piii, vector<piii>, greater<piii>> pq;
        vector<vector<int>> dist(v, vector<int>(26, INF));
        vector<vector<bool>> vis(v, vector<bool>(26, 0));
        for (int i = 0; i < 26; i++) {
            pq.push({0, {u, i}});
            dist[u][i] = 0;
        }
        while (!pq.empty()) {
            k = pq.top().f;
            u = pq.top().s.f;
            c = pq.top().s.s;
            pq.pop();
            vis[u][c] = 1;
            for (int i = 0; i < 26; i++) {
                for (const auto& w : adj[u][i]) {
                    if (c != i && !vis[w.s.f][w.s.s] && k + w.f < dist[w.s.f][w.s.s]) {
                        dist[w.s.f][w.s.s] = k + w.f;
                        pq.push({dist[w.s.f][w.s.s], {w.s.f, w.s.s}});
                    }
                }
            }
        }
        return *min_element(dist[e].begin(), dist[e].end());
    }

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m;
    string o, d, a, b, k;
    while (cin >> m && m) {
        int chave = 0;
        map<string, int> mapa;
        grafo g(m*3);
        cin >> o >> d;
        if (!mapa.count(o)) mapa[o] = chave++;
        if (!mapa.count(d)) mapa[d] = chave++;
        while (m--) {
            cin >> a >> b >> k;
            if (!mapa.count(a)) mapa[a] = chave++;
            if (!mapa.count(b)) mapa[b] = chave++;
            g.aresta(mapa[a], mapa[b], k.length(), k[0]-'a');
        }
        int r = g.dijkstra(mapa[o], mapa[d]);
        if (r == INF) cout << "impossivel\n";
        else cout << r << endl;
    }
    return 0;
}