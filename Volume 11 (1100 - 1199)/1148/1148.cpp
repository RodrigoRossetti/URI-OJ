#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
	vector<vector<bool>> arestas;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	void imprime();
	vector<int> dijkstra(int raiz);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
	arestas = vector<vector<bool>>(v, vector<bool>(v, false));
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
	arestas[u][w] = 1;
}

vector<int> grafo::dijkstra(int raiz) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<int> dist(v, INT_MAX);
	vector<bool> visitado(v, false);
	pq.push(make_pair(0, raiz));
	dist[raiz] = 0;
	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		visitado[u] = true;
		for (auto w : adj[u]) {
			if (arestas[u][w.first] && arestas[w.first][u]) w.second = 0;
			if (!visitado[w.first] && dist[u] != INT_MAX && dist[u] + w.second < dist[w.first]) {
				dist[w.first] = dist[u] + w.second;
				pq.push(make_pair(dist[w.first], w.first));
			}
		}
	}
	return dist;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x ,y, h, q;
	while (cin >> n >> m && (n || m)) {
		grafo g(n);
		while (m--) {
			cin >> x >> y >> h;
			g.aresta(x-1, y-1, h);
		}
		cin >> q;
		while (q--) {
			cin >> x >> y;
			vector<int> dist = g.dijkstra(x-1);
			if (dist[y-1] == INT_MAX) cout << "Nao e possivel entregar a carta\n";
			else cout << dist[y-1] << endl;
		}
		cout << endl;
	}
	return 0;
}