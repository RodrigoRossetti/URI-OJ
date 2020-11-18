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

	void dfsR(int raiz, vector<bool>& visitado) {
		visitado[raiz] = 1;
		for (const auto& w : adj[raiz])
			if (!visitado[w.first])
				dfsR(w.first, visitado);
	}
	
	bool dfs(int raiz) {
		vector<bool> visitado(v, 0);
		dfsR(raiz, visitado);
		for (int i = 0; i < v; i++)
			if (!visitado[i])
				return 0;
		return 1;
	}

};

double distancia(pair<int, int> a, pair<int, int> b) {
	int x = a.first, y = a.second;
	int x2 = b.first, y2 = b.second;
	return sqrt((x-x2)*(x-x2)+(y-y2)*(y-y2));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, d, x, y, chave = 0;
	map<pair<int, int>, int> mapa;
	cin >> n >> d;
	grafo g(n);
	vector<pair<int, int>> pontos(n);
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		mapa[{x, y}] = chave++;
		pontos[i] = {x, y};
	}
	for (int i = 0; i < n; i++)
		for (int j = i+1; j < n; j++)
			if (distancia(pontos[i], pontos[j]) <= d)
				g.aresta(mapa[pontos[i]], mapa[pontos[j]], 1);
	cout << (g.dfs(0) ? "S" : "N") << endl;
	return 0;
}