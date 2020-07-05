#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	int dijkstra(int raiz, int roca);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
}

int grafo::dijkstra(int raiz, int rota) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<int> dist(v, INT_MAX);
	vector<bool> visitado(v, false);
	pq.push(make_pair(0, raiz));
	dist[raiz] = 0;
	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		visitado[u] = true;
		for (const auto& w : adj[u]) {
			if (!visitado[w.first] && dist[u] != INT_MAX && dist[u] + w.second < dist[w.first]) {
				dist[w.first] = dist[u] + w.second;
				pq.push(make_pair(dist[w.first], w.first));
			}
		}
	}
	return dist[rota-1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, c, k, u, v, p;
	while (cin >> n >> m >> c >> k && n) {
		grafo g(n);
		while (m--) {
			cin >> u >> v >> p;
			if (u >= c && v >= c) g.aresta(u, v, p), g.aresta(v, u, p);
			if (u >= c && v < c) g.aresta(u, v, p);
			if (u < c && v >= c) g.aresta(v, u, p);
			if (u < c && v < c && abs(u-v) == 1) g.aresta(u, v, p), g.aresta(v, u, p);
		}
		cout << g.dijkstra(k, c) << endl;
	}
	return 0;
}