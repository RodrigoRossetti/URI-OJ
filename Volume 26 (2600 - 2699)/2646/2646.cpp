#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	void imprime();
	bool buscaCaminho(int inicio, int fim);
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

bool grafo::buscaCaminho(int inicio, int fim) {
	
	vector<bool> visitado(v, false);
	if (inicio == fim) return true;
	visitado[inicio] = true;
	queue<int> fila;
	fila.push(inicio);

	while (!fila.empty()) {
		inicio = fila.front();
		fila.pop();
		for (const auto& x : adj[inicio]) {
			if (!visitado[x.first]) {
				if (x.first == fim) return true;
				visitado[x.first] = true;
				fila.push(x.first);
			}
		}
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n;
	char c1, c2;
	string s1, s2;
	cin >> m >> n >> ws;
	grafo g(26);
	while (m--) {
		cin >> c1 >> c2;
		g.aresta(c1-97, c2-97, 1);
	}
	while (n--) {
		bool f = 1;
		cin >> s1 >> s2;
		if (s1.length() != s2.length()) f = 0;
		for (int i = 0; i < s1.length() && f; i++)
			if (!g.buscaCaminho(s1[i]-97, s2[i]-97))
				f = 0;
		cout << (f ? "yes\n" : "no\n");
	}
	return 0;
}