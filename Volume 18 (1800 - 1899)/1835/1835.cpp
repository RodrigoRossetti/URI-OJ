#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
	void dfsR(int raiz, vector<bool> &visitado);
	void ordemStack(int u, vector<bool> &visitado, stack<int> &st);

public:

	grafo(int v);
	void aresta(int u, int w, int k);
	grafo transpor();
	int kosaraju();
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}
void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
	adj[w].push_back(make_pair(u, k));
}

grafo grafo::transpor() { 
    grafo g(v); 
    for (int u = 0; u < v; u++) 
        for(auto w : adj[u]) 
            g.adj[w.first].push_back(make_pair(u, w.second)); 
    return g; 
}

void grafo::dfsR(int raiz, vector<bool> &visitado) {
    visitado[raiz] = true; 
    for (auto x : adj[raiz]) 
        if (!visitado[x.first]) 
            dfsR(x.first, visitado); 
}

void grafo::ordemStack(int u, vector<bool> &visitado, stack<int> &st) { 
    visitado[u] = true; 
    for(auto w : adj[u]) 
        if(!visitado[w.first]) 
            ordemStack(w.first, visitado, st); 
    st.push(u); 
} 
  
int grafo::kosaraju() {
	int total = -1;
    stack<int> st;
    vector<bool> visitado(v, false);
    for(int i = 0; i < v; i++)
        if(visitado[i] == false)
            ordemStack(i, visitado, st);
    grafo gt = transpor();
	visitado = vector<bool>(v, false);

    while (!st.empty()) {
        int u = st.top();
        st.pop();
        if (!visitado[u]) {
            gt.dfsR(u, visitado);
			total++;
        }
    }
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m, x, y;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		cin >> n >> m;
		grafo g(n);
		while (m--) {
			cin >> x >> y;
			g.aresta(x-1, y-1, 1);
		}
		int total = g.kosaraju();
		if (total == 0) cout << "Caso #" << i << ": a promessa foi cumprida\n";
		else cout << "Caso #" << i << ": ainda falta(m) " << total << " estrada(s)\n";
	}
	return 0;
}