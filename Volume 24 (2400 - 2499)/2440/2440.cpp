#include <bits/stdc++.h>
using namespace std;

int total = 0;

class grafo {
	int v;
	vector<int> *adj;
	void dfsR(int raiz, vector<bool> &visitado);
	void ordemStack(int u, vector<bool> &visitado, stack<int> &st);
public:
	grafo(int v);
	~grafo();
	void aresta(int u, int w);
	grafo transpor();
	void kosaraju();
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<int>[v];
}

grafo::~grafo() {
	delete adj;
}

void grafo::aresta(int u, int w) {
	adj[u].push_back(w);
	adj[w].push_back(u);
}

grafo grafo::transpor() { 
    grafo g(v); 
    for (int u = 0; u < v; u++) 
        for(auto w : adj[u]) 
            g.adj[w].push_back(u); 
    return g; 
} 

void grafo::dfsR(int raiz, vector<bool> &visitado) {
    visitado[raiz] = true; 
    for (auto w : adj[raiz]) 
        if (!visitado[w]) 
            dfsR(w, visitado); 
}

void grafo::ordemStack(int u, vector<bool> &visitado, stack<int> &st) { 
    visitado[u] = true; 
    for(auto w : adj[u]) 
        if(!visitado[w]) 
            ordemStack(w, visitado, st); 
    st.push(u); 
} 
  
void grafo::kosaraju() { 
    stack<int> st; 
    vector<bool> visitado(v, false); 
    for(int i = 0; i < v; i++) 
        if(!visitado[i]) 
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
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n, a, b;
	cin >> n >> m;
	grafo g(n+1);
	while (m--) {
		cin >> a >> b;
		g.aresta(a, b);
	}
	g.kosaraju();
	cout << total-1 << endl;
	return 0;
}