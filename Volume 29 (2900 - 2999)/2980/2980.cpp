#include <bits/stdc++.h>
using namespace std;

class grafo {
	int V;
	vector<vector<pair<int, int>>> adj;
	long long maior = 0;

	void dfsR(int raiz, vector<bool> &visitado, int etapas, long long total = 0) {
		visitado[raiz] = 1;
		if (etapas) {
			for (auto &u : adj[raiz]) {
				if (!visitado[u.first]) {
					dfsR(u.first, visitado, etapas-1, total+u.second);
					maior = max(maior, total+etapas*u.second);
				}
			}
		}
	}	

public:

	grafo(int V) {
		this->V = V;
		adj = vector<vector<pair<int, int>>>(V);
	}

	void aresta(int u, int v, int w) {
		adj[u].push_back(make_pair(v, w));
		adj[v].push_back(make_pair(u, w));
	}

	long long dfs(int raiz, int etapas) {
		vector<bool> visitado(V, 0);
		dfsR(raiz, visitado, etapas);
		return maior;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, k, u, v, w;
	cin >> n;
	grafo g(n);
	while (n-- > 1) {
		cin >> u >> v >> w;
		g.aresta(u-1, v-1, w);
	}
	cin >> k >> x;
	cout << g.dfs(x-1, k);
	return 0;
}