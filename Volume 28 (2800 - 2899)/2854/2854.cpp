#include <bits/stdc++.h>
using namespace std;

int total = 0;

class grafo {
	int chave, v;
	unordered_map<string, int> mapa;
	vector<int> *adj;
	void dfsR(int raiz, vector<bool> &visitado);
	void ordemStack(int u, vector<bool> &visitado, stack<int> &st);
public:
	grafo(int v);
	int vertice(string u);
	void aresta(string u, string w);
	grafo transpor();
	void kosaraju();
};

grafo::grafo(int v) {
	this->v = v;
	chave = 0;
	adj = new vector<int>[v];
}

int grafo::vertice(string u) {
	auto pos = mapa.find(u);
	if (pos == mapa.end()) {
		mapa[u] = chave;
		chave++;
	}
	return mapa[u];
}

void grafo::aresta(string u, string w) {
	int a = vertice(u), b = vertice(w);
	adj[a].push_back(b);
	adj[b].push_back(a);
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
	int m, n;
	string a, b, lixo;
	cin >> m >> n >> ws;
	grafo g(m+1);
	while (n--) {
		cin >> a >> lixo >> b;
		g.aresta(a, b);
	}
	g.kosaraju();
	cout << total-1 << endl;
	return 0;
}