#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	int dijkstra(int raiz, int fim, int naoPassa);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
	adj[w].push_back(make_pair(u, k));
}

int grafo::dijkstra(int raiz, int fim, int naoPassa) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<int> dist(v, INT_MAX);
	vector<bool> visitado(v, false);
	pq.push(make_pair(0, raiz));
	dist[raiz] = 0;
	visitado[naoPassa] = true;
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
		if (visitado[fim]) return dist[fim];;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b, c, r, e;
	while (cin >> n >> m) {
		grafo g(n);
		while (m--) {
			cin >> a >> b;
			g.aresta(a-1, b-1, 1);
		}
		cin >> c >> r >> e;
		cout << g.dijkstra(c-1, r-1, e-1) << endl;
	}
	return 0;
}