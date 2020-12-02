#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

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

	void dfsR(int u, vector<bool>& vis) {
		vis[u] = 1;
		for (const auto& w : adj[u])
			if (!vis[w.first])
				dfsR(w.first, vis);
	}

	bool motherVertex() {
		int last;
		vector<bool> vis(v, 0);
		for (int i = 0; i < v; i++) {
			if (!vis[i]) {
				dfsR(i, vis);
				last = i;
			}
		}
		fill(vis.begin(), vis.end(), 0);
		dfsR(last, vis);
		for (int i = 0; i < v; i++)
			if (!vis[i])
				return 0;
		return 1;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, n, m, x, y;
	cin >> c;
	while (c--) {
		cin >> n >> m;
		grafo g(n);
		while (m--) {
			cin >> x >> y;
			g.aresta(x-1, y-1, 1);
		}
		cout << (g.motherVertex() ? "S" : "N") << endl;
	}
	return 0;
}