#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<int> *adj;
public:
	grafo(int v);
	void aresta(int u, int w);
	void imprime();
	bool buscaAresta(int inicio, int fim);
	bool buscaCaminho(int inicio, int fim);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<int>[v];
}

void grafo::aresta(int u, int w) {
	adj[u].push_back(w);
	adj[w].push_back(u);
}

void grafo::imprime() {
	for (int i = 0; i < v; i++) {
		cout << i;
		for (auto x : adj[i]) cout << "-> " << x;
		cout << endl;
	}
}

bool grafo::buscaAresta(int inicio, int fim) {
	auto it = find(adj[inicio].begin(), adj[inicio].end(), fim);
	if (it == adj[inicio].end()) return false;
	return true;
}

bool grafo::buscaCaminho(int inicio, int fim) {
	if (inicio == fim) return true;
	vector<bool> visitado(v, false);
	visitado[inicio] = true;
	queue<int> fila;
	fila.push(inicio);
	while (!fila.empty()) {
		inicio = fila.front();
		fila.pop();
		for (auto x : adj[inicio]) {
			if (!visitado[x]) {
				if (x == fim) return true;
				visitado[x] = true;
				fila.push(x);
			}
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, p, a, b, k, l;
	cin >> n >> m >> p;
	grafo g(n+1);
	while (m--) {
		cin >> a >> b;
		g.aresta(a, b);
	}
	while (p--) {
		cin >> k >> l;
		g.buscaCaminho(k, l) ? cout << "Lets que lets\n" : cout << "Deu ruim\n";
	}
	return 0;
}