#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF INT_MAX

struct grafo {
	
	int v;
	vector<vector<pair<int, int>>> adj;

	grafo(int v) {
		this->v = v;
		adj = vector<vector<pair<int, int>>>(v);
	}

	void aresta(int u, int w, int k) {
		adj[u].push_back({w, k});
	}

	int dijkstra(int raiz, int fim) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<int> dist(v, INF);
		vector<bool> visitado(v, 0);
		pq.push({0, raiz});
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			visitado[u] = 1;
			if (visitado[fim]) break;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[u] != INF && dist[u] + w.second < dist[w.first]) {
					dist[w.first] = dist[u] + w.second;
					pq.push({dist[w.first], w.first});
				}
			}
		}
		return dist[fim];
	}
	
};

int peso(int c) {
	switch(c) {
		case 'H': case 'E': case '.': return 0;
		default: return c-'0';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, inicio, fim;
	cin >> n >> m >> ws;
	vector<string> v(n);
	for (auto& x : v)
		getline(cin, x);
	grafo g(n*m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (v[i][j] == 'H') inicio = i*m+j;
			else if (v[i][j] == 'E') fim = i*m+j;
			if (v[i][j] != '#') {
				if (i-1 >= 0 && v[i-1][j] != '#')
					g.aresta(i*m+j, (i-1)*m+j, peso(v[i-1][j]));
				if (i+1 < n && v[i+1][j] != '#')
					g.aresta(i*m+j, (i+1)*m+j, peso(v[i+1][j]));
				if (j-1 >= 0 && v[i][j-1] != '#')
					g.aresta(i*m+j, i*m+j-1, peso(v[i][j-1]));
				if (j+1 < m && v[i][j+1] != '#')
					g.aresta(i*m+j, i*m+j+1, peso(v[i][j+1]));
			}
		}
	}
	int r = g.dijkstra(inicio, fim);
	if (r == INF) cout << "ARTSKJID\n";
	else cout << r << endl;
	return 0;
}