#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class grafo {
	int v;
	vector<vector<pair<int, int>>> adj;

public:

	int cap;
	vector<int> tax;

	grafo(int v, int cap) {
		this->v = v;
		this->cap = cap;
		adj = vector<vector<pair<int, int>>>(v);
		tax = vector<int>(v);
	}

	void aresta(int u, int w, int k) {
		adj[u].push_back({w, k});
		adj[w].push_back({u, k});
	}

	void dfsR(int raiz, int w, int pai, vector<bool>& visitado, int& total) {
		visitado[raiz] = 1;
		for (const auto& x : adj[raiz])
			if (!visitado[x.first])
				dfsR(x.first, x.second, raiz, visitado, total);
		if (pai != -1) {
			total += 2*ceil((double)tax[raiz]/cap)*w;
			tax[pai] += tax[raiz];
			tax[raiz] = 0;
		}
	}

	int dfs() {
		vector<bool> visitado(v, 0);
		int total = 0;
		dfsR(0, -1, -1, visitado, total);
		return total;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, cap, a, b, c;
	cin >> n >> cap;
	grafo g(n, cap);
	for (int i = 0; i < n; i++) cin >> g.tax[i];
	for (int i = 1; i < n; i++) {
		cin >> a >> b >> c;
		g.aresta(a-1, b-1, c);
	}
	cout << g.dfs() << endl;
	return 0;
}