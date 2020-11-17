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

	void dfsR(int u, vector<bool>& visitado) {
		visitado[u] = 1;
		for (const auto& w : adj[u])
			if (!visitado[w.first])
				dfsR(w.first, visitado);
	}
	
	bool dfs() {
		vector<bool> visitado(v, 0);
		dfsR(0, visitado);
		for (int i = 0; i < v; i++)
			if (!visitado[i])
				return 0;
		return 1;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int e, l, x, y, caso = 1;
	while (cin >> e >> l && (e || l)) {
		grafo g(e);
		while (l--) {
			cin >> x >> y;
			g.aresta(x-1, y-1, 1);
		}
		cout << "Teste " << caso++ << endl;
		cout << (g.dfs() ? "normal" : "falha") << endl;
		cout << endl;
	}
	return 0;
}