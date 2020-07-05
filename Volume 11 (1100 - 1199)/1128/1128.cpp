#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	grafo transpor();
	void dfsR(int raiz, vector<bool> &visitado);
	bool isSC();
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
}

grafo grafo::transpor() { 
    grafo g(v); 
    for (int u = 0; u < v; u++) 
        for(const auto& w : adj[u]) 
            g.adj[w.first].push_back(make_pair(u, w.second)); 
    return g; 
} 

void grafo::dfsR(int raiz, vector<bool> &visitado) {
    visitado[raiz] = true;
    for (const auto& x : adj[raiz]) 
        if (!visitado[x.first]) 
            dfsR(x.first, visitado); 
}

bool grafo::isSC() {
	vector<bool> visitado(v, false); 
	dfsR(0, visitado); 

	for (int i = 0; i < v; i++) 
		if (visitado[i] == false) 
			return false; 

	grafo gt = transpor();
	visitado = vector<bool>(v, false);
	gt.dfsR(0, visitado); 

	for (int i = 0; i < v; i++) 
		if (visitado[i] == false) 
			return false; 

	return true; 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b,k;
	while (cin >> n >> m && n && m) {
		grafo g(n);
		while (m--) {
			cin >> a >> b >> k;
			g.aresta(a-1, b-1, k);
			if (k == 2) g.aresta(b-1, a-1, k);
		}
		cout << (g.isSC() ? "1\n" : "0\n");
	}
	return 0;
}