#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 100000

struct grafo {

    int v;
    vector<vector<pair<int, int>>> adj;

    grafo(int v) {
        this->v = v;
        adj.resize(v);
    }

    void aresta(int u, int w, int k) {
        adj[u].push_back({w, k});
        adj[w].push_back({u, k});
    }

    void dijkstra(int u) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> pai(v, -1);
        vector<int> dist(v, INF);
        vector<bool> vis(v, 0);
        pq.push({0, u});
        dist[u] = 0;
        while (!pq.empty()) {
            u = pq.top().second;
            pq.pop();
            vis[u] = 1;
            for (const auto& w : adj[u]) {
                if (!vis[w.first] && dist[u] + w.second < dist[w.first]) {
                    pai[w.first] = u;
                    dist[w.first] = dist[u] + w.second;
                    pq.push({dist[w.first], w.first});
                }
            }
        }
        if (dist[0] < 120) cout << "Will not be late.";
        else cout << "It will be " << dist[0]-120 <<" minutes late.";
        cout << " Travel time - " << dist[0] << " - best way -";
        stack<int> st;
        u = 0;
        while (u != -1) {
            st.push(u);
            u = pai[u];
        }
        while (!st.empty()) {
            cout << " " << st.top()+1;
            st.pop();
        }
        cout << endl;
    }

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, e, d, x, y, t;
    while (cin >> c >> e && (c || e)) {
        grafo g(c);
        while (e--) {
            cin >> x >> y >> t;
            g.aresta(x-1, y-1, t);
        }
        cin >> d;
        g.dijkstra(d-1);
    }
    return 0;
}