#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF ULLONG_MAX
#define ull unsigned long long

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

	grafo(int v) {
		this->v = v;
		adj.resize(v);
	}

	void aresta(int u, int w, int k) {
		adj[u].push_back({w, k});
		adj[w].push_back({u, k});
	}

	vector<ull> dijkstra(int raiz) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<ull> dist(v, INF);
		vector<bool> vis(v, 0);
		pq.push({0, raiz});
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			vis[u] = 1;
			for (const auto& w : adj[u]) {
				if (!vis[w.first] && w.second != INF && dist[u] + w.second < dist[w.first]) {
					dist[w.first] = dist[u] + w.second;
					pq.push({dist[w.first], w.first});
				}
			}
		}
		return dist;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, l, q, s, t;
	while (cin >> n && n) {
		grafo g(n);
		for (int i = 1; i < n; i++) {
			cin >> a >> l;
			g.aresta(a, i, l);
		}
		vector<ull> dist = g.dijkstra(0);
		LCA l(g.adj);
		cin >> q;
		for (int i = 0; i < q; i++) {
			cin >> s >> t;
			if (i) cout << " ";
			cout << dist[s] + dist[t] - 2 * dist[l.lca(s, t)];
		}
		cout << endl;
	}
	return 0;
}