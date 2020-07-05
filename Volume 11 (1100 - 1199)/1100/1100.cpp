#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	int dijkstra(int raiz, int fim);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
}

int grafo::dijkstra(int raiz, int fim) {
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
		if (visitado[fim]) return dist[fim];
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	grafo g(64);
	for (int i = 0; i < 64; i++) {
		if (i % 8 != 7) {
			if (i <= 46) g.aresta(i, i+17, 1);
			if (i >= 15) g.aresta(i, i-15, 1);
		}
		if (i % 8 != 0) {
			if (i <= 48) g.aresta(i, i+15, 1);
			if (i >= 17) g.aresta(i, i-17, 1);
		}
		if (i % 8 >= 2) {
			if (i <= 57) g.aresta(i, i+6, 1);
			if (i >= 10) g.aresta(i, i-10, 1);
		}
		if (i % 8 <= 5) {
			if (i <= 53) g.aresta(i, i+10, 1);
			if (i >= 6) g.aresta(i, i-6, 1);
		}
	}
	char a, b;
	int x, y;
	while (cin >> a >> x >> b >> y) {
		int inicio = a-'a'+((x-1)*8), fim = b-'a'+((y-1)*8);
		cout << "To get from " << a << x << " to " << b << y <<" takes "
			 << g.dijkstra(inicio, fim) << " knight moves.\n";
	}
	return 0;
}