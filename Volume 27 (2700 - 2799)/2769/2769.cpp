#include <bits/stdc++.h>
using namespace std;

#define INF LLONG_MAX

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	void imprime();
	long long dijkstra(int raiz, int fim);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
}

void grafo::imprime() {
	for (int i = 0; i < v; i++) {
		cout << '[' << i << "] ";
		for (const auto& w : adj[i]) cout << "-> " << w.first << "(" << w.second << ") ";
		cout << endl;
	}
}

long long grafo::dijkstra(int raiz, int fim) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	vector<long long> dist(v, INF);
	vector<bool> visitado(v, false);
	pq.push(make_pair(0, raiz));
	dist[raiz] = 0;
	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		visitado[u] = true;
		for (const auto& w : adj[u]) {
			if (!visitado[w.first] && dist[u] != INF && dist[u] + w.second < dist[w.first]) {
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
	int n, e1, e2, x1, x2, a;
	while(cin >> n >> e1 >> e2) {
		int p1[n], p2[n];
		grafo g(2*n+2);
		g.aresta(0, 1, e1);
		g.aresta(0, n+1, e2);
		for (int i = 1; i <= n; i++) {
			cin >> a;
			p1[i-1] = a;
			if (i == n) break;
			else g.aresta(i, i+1, a);
		}
		for (int i = n+1; i <= 2*n; i++) {
			cin >> a;
			p2[i-n-1] = a;
			if (i == 2*n) break;
			else g.aresta(i, i+1, a);
		}
		for (int i = 1; i < n; i++) {
			cin >> a;
			g.aresta(i, i+n+1, a+p1[i-1]);
		}
		for (int i = n+1; i < 2*n; i++) {
			cin >> a;
			g.aresta(i, i-n+1, a+p2[i-n-1]);
		}
		cin >> x1 >> x2;
		g.aresta(n, 2*n+1, x1+p1[n-1]);
		g.aresta(2*n, 2*n+1, x2+p2[n-1]);
		cout << g.dijkstra(0, 2*n+1) << endl;
	}
	return 0;
}