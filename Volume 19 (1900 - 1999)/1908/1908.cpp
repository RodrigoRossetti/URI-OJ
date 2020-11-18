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

	int bfs(int u, int fim) {
		int d = 0;
		vector<bool> visitado(v, 0);
		visitado[u] = 1;
		queue<pair<int, int>> q;
		q.push({u, d});
		while (!q.empty()) {
			u = q.front().first;
			d = q.front().second;
			q.pop();
			if (u == fim) return d;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first]) {
					visitado[w.first] = 1;
					q.push({w.first, d+1});
				}
			}
		}
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, l, c;
	cin >> n >> k;
	grafo g(n);
	while (k--) {
		cin >> l;
		vector<int> aux(l);
		for (int i = 0; i < l; i++) {
			cin >> c;
			aux[i] = c-1;
		}
		for (int i = 0; i < l; i++)
			for (int j = i+1; j < l; j++)
				g.aresta(aux[i], aux[j], 1);
	}
	cout << g.bfs(0, n-1) << endl;
	return 0;
}