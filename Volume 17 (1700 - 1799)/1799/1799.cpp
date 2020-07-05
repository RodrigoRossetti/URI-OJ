#include <bits/stdc++.h>
using namespace std;

class grafo {
	int chave, v;
	vector<pair<int, int>> *adj;
public:
	unordered_map<string, int> mapa;
	grafo(int v);
	int vertice(string u);
	void aresta(string u, string w, int k);
	void imprime();
	int dijkstra(int raiz, int fim);
};

grafo::grafo(int v) {
	this->v = v+1;
	chave = 0;
	adj = new vector<pair<int, int>>[v];
}

int grafo::vertice(string u) {
	auto pos = mapa.find(u);
	if (pos == mapa.end()) {
		mapa[u] = chave;
		chave++;
	}
	return mapa[u];
}

void grafo::aresta(string u, string w, int k) {
	int a = vertice(u), b = vertice(w);
	adj[a].push_back(make_pair(b, k));
	adj[b].push_back(make_pair(a, k));
}

void grafo::imprime() {
	for (int i = 0; i < v; i++) {
		cout << i;
		for (auto w : adj[i]) cout << "-> " << w.first << "(" << w.second << ") ";
		cout << endl;
	}
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
		for (auto w : adj[u]) {
			if (!visitado[w.first] && dist[u] != INT_MAX && dist[u] + w.second < dist[w.first]) {
				dist[w.first] = dist[u] + w.second;
				pq.push(make_pair(dist[w.first], w.first));
				if (w.first == fim) return dist[w.first];
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n, inicio, fim, estrela;
	string a, b;
	cin >> m >> n;
	grafo g(m);
	while (n--) {
		cin >> a >> b;
		g.aresta(a, b, 1);
		if (a == "Entrada") inicio = g.mapa[a];
		else if (a == "Saida") fim = g.mapa[a];
		else if (a == "*") estrela = g.mapa[a];
		if (b == "Entrada") inicio = g.mapa[b];
		else if (b == "Saida") fim = g.mapa[b];
		else if (b == "*") estrela = g.mapa[b];
	}
	cout << g.dijkstra(inicio, estrela) + g.dijkstra(estrela, fim) << endl;
	return 0;
}