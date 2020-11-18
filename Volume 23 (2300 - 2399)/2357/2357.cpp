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
		adj[w].push_back({u, k});
	}

	bool dfsR(int u, int pai, vector<bool>& visitado) {
		visitado[u] = 1;
		for (const auto& w : adj[u]) {
			if (!visitado[w.first]) {
				if (dfsR(w.first, u, visitado)) {
					return 1;
				}
			}
			else if (w.first != pai) return 1;
		}
		return 0;
	}
	
	bool dfs() {
		vector<bool> visitado(v, 0);
		for (int i = 0; i < v; i++)
			if (!visitado[i])
				if (dfsR(i, -1, visitado))
					return 0;
		return 1;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b;
	while (cin >> n >> m >> ws) {
		grafo g(n);
		while (m--) {
			cin >> a >> b >> ws;
			g.aresta(a-1, b-1, 1);
		}
		cout << (g.dfs() ? "Seguro" : "Inseguro") << endl;
	}
	return 0;
}