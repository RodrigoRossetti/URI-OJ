#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
	bool buscaCicloR(int w, vector<bool> &visitado, vector<bool> &pilhaRecursao);
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	bool buscaCiclo();
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
}

bool grafo::buscaCicloR(int u, vector<bool> &visitado, vector<bool> &pilhaRecursao) {
    if (visitado[u] == false) {
        visitado[u] = true;
        pilhaRecursao[u] = true;
        for (const auto& w : adj[u])  { 
            if (!visitado[w.first] && buscaCicloR(w.first, visitado, pilhaRecursao))
                return true;
            else if (pilhaRecursao[w.first])
                return true;
        }
    }
    pilhaRecursao[u] = false;
    return false;
} 

bool grafo::buscaCiclo() {
    vector<bool> visitado(v, false);
	vector<bool> pilhaRecursao(v, false);

    for(int i = 0; i < v; i++)
        if (buscaCicloR(i, visitado, pilhaRecursao))
            return true;

    return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m, x, y;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		grafo g(n);
		while (m--) {
			cin >> x >> y;
			g.aresta(x-1, y-1, 1);
		}
		cout << (g.buscaCiclo() ? "SIM\n" : "NAO\n");
	}
	return 0;
}