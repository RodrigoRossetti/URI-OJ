#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	int bfs(int raiz);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
}

int grafo::bfs(int raiz) {
	int total = 0;
	vector<bool> visitado(v, false);
	visitado[raiz] = true;
	queue<int> fila;
	fila.push(raiz);

	while (!fila.empty()) {
		raiz = fila.front();
		fila.pop();
		total++;
		for (const auto& x : adj[raiz]) {
			if (!visitado[x.first]) {
				visitado[x.first] = true;
				fila.push(x.first);
			}
		}
	}
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b, e;
	while (cin >> n >> m) {
		grafo g(n);
		while (m--) {
			cin >> a >> b;
			g.aresta(a-1, b-1, 1);
		}
		cin >> e;
		cout << g.bfs(e-1) << endl;
	}
	return 0;
}