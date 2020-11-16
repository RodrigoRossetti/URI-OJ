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

	void pontesDfs(int u, vector<bool>& visitado, vector<int>& disc,
					vector<int>& low, vector<int>& pai, int& total) {
		static int t = 0;
		visitado[u] = 1;
		disc[u] = low[u] = ++t;
		for (auto& w : adj[u]) {
			if (!visitado[w.first]) {
				pai[w.first] = u;
				pontesDfs(w.first, visitado, disc, low, pai, total);
				low[u]  = min(low[u], low[w.first]);
				if (low[w.first] > disc[u]) total++;
			} 
			else if (w.first != pai[u]) 
				low[u]  = min(low[u], disc[w.first]); 
		} 
	} 
	
	int pontes() {
		vector<bool> visitado(v, 0);
		vector<int> pai(v, -1);
		vector<int> low(v);
		vector<int> disc(v);
		int total = 0;
		for (int i = 0; i < v; i++)
			if (!visitado[i])
				pontesDfs(i, visitado, disc, low, pai, total);
		return total;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, p, x, y;
	while (cin >> c >> p) {
		grafo g(c);
		while (p--) {
			cin >> x >> y;
			g.aresta(x-1, y-1, 1);
		}
		cout << g.pontes() << endl;
	}
	return 0;
}