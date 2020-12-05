#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define f first
#define s second

struct LCA {
    vector<int> height, euler, first, segtree;
    vector<bool> vis;
    int n;

    LCA(vector<vector<pair<int, int>>> &adj, int root = 0) {
        n = adj.size();
        height.resize(n);
        first.resize(n);
        euler.reserve(n*2);
        vis.assign(n, 0);
        dfs(adj, root);
        int m = euler.size();
        segtree.resize(m*4);
        build(1, 0, m-1);
    }

    void dfs(vector<vector<pair<int, int>>> &adj, int u, int h = 0) {
        vis[u] = 1;
        height[u] = h;
        first[u] = euler.size();
        euler.push_back(u);
        for (auto& w : adj[u]) {
            if (!vis[w.first]) {
                dfs(adj, w.first, h + 1);
                euler.push_back(u);
            }
        }
    }

    void build(int u, int b, int e) {
        if (b == e) segtree[u] = euler[b];
        else {
            int mid = (b + e) / 2;
            build(u << 1, b, mid);
            build(u << 1 | 1, mid + 1, e);
            int l = segtree[u << 1], r = segtree[u << 1 | 1];
            segtree[u] = (height[l] < height[r]) ? l : r;
        }
    }

    int query(int u, int b, int e, int l, int r) {
        if (b > r || e < l) return -1;
        if (b >= l && e <= r) return segtree[u];

        int mid = (b + e) >> 1;
        int left = query(u << 1, b, mid, l, r);
        int right = query(u << 1 | 1, mid + 1, e, l, r);

        if (left == -1) return right;
        if (right == -1) return left;
        return height[left] < height[right] ? left : right;
    }

    int lca(int u, int v) {
        int l = first[u], r = first[v];
        if (l > r) swap(l, r);
        return query(1, 0, euler.size() - 1, l, r);
    }

};

struct grafo {

    int v;
    vector<vector<pair<int, int>>> adj;
    vector<int> dist;

    grafo(int v) {
        this->v = v;
        dist.resize(v);
        adj.resize(v);
    }

    void aresta(int u, int w, int k) {
        adj[u].push_back({w, k});
        adj[w].push_back({u, k});
    }

    void bfs(int u) {
        vector<bool> vis(v, 0);
        vis[u] = 1;
        queue<pair<int, int>> q;
        q.push({u, 0});
        int d;
        while (!q.empty()) {
            u = q.front().f;
            dist[u] = d = q.front().s;
            q.pop();
            for (const auto& w : adj[u]) {
                if (!vis[w.first]) {
                    vis[w.first] = 1;
                    q.push({w.first, d+1});
                }
            }
        }
    }

};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c;
    cin >> n;
    grafo g(n);
    vector<pair<int, int>> v(n/2, {-1, -1});
    for (int i = 0; i < n; i++) {
        cin >> c;
        c--;
        if (v[c].first == -1) v[c].f = i;
        else v[c].s = i;
    }
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b;
        g.aresta(a-1, b-1, 1);
    }
    LCA l(g.adj);
    g.bfs(0);
    int total = 0;
    for (int i = 0; i < n/2; i++)
        total += g.dist[v[i].f] + g.dist[v[i].s] - 2 * g.dist[l.lca(v[i].f, v[i].s)];
    cout << total << endl;
    return 0;
}