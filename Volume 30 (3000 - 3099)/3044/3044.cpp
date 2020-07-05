#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	void imprime();
	void apRec(int u, vector<bool> &visitado, vector<int> &desc,
		vector<int> &menor,vector<int> &pai, vector<bool> &ap);
	void ap();
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
	adj[w].push_back(make_pair(u, k));
}

void grafo::imprime() {
	for (int i = 0; i < v; i++) {
		cout << '[' << i << "] ";
		for (const auto& w : adj[i]) cout << "-> " << w.first << "(" << w.second << ") ";
		cout << endl;
	}
}

void grafo::apRec(int u, vector<bool> &visitado, vector<int> &desc,
		vector<int> &menor,vector<int> &pai, vector<bool> &ap) {
    int filhos = 0;
	static int tempo = 0;
    visitado[u] = true;
    desc[u] = menor[u] = ++tempo;

    for (const auto& w : adj[u]) {
        if (!visitado[w.first]) {
            filhos++;
            pai[w.first] = u;
            apRec(w.first, visitado, desc, menor, pai, ap);
            menor[u] = min(menor[u], menor[w.first]);
            if (pai[u] == -1 && filhos >= 2) ap[u] = true;
            if (pai[u] != -1 && menor[w.first] >= desc[u]) ap[u] = true;
        }
        else if (w.first != pai[u]) menor[u] = min(menor[u], desc[w.first]);
    }
}
  
void grafo::ap() {
    vector<bool> visitado(v, false);
	vector<bool> ap(v, false);
	vector<int> pai(v, -1);
	vector<int> desc(v);
	vector<int> menor(v);

    for (int i = 0; i < v; i++)
        if (!visitado[i])
            apRec(i, visitado, desc, menor, pai, ap);

	int total = 0;
    for (int i = 0; i < v; i++) {
		if (ap[i]) {
			total++;
			cout << i+1 << " ";
		}
	}
	if (total == 0) cout << "nenhum";
	cout << endl << endl;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, y, t = 1;
	while (cin >> n >> m && (n || m)) {
		grafo g(n);
		while (m--) {
			cin >> x >> y;
			g.aresta(x-1, y-1, 1);
		}
		cout << "Teste " << t++ << endl;
		g.ap();
	}
	return 0;
}