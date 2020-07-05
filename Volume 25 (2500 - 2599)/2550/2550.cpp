#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
	void dfsR(int raiz, vector<bool> &visitado);
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	void imprime();
	grafo transpor();
	int prim(int raiz);
	int isSC();
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

grafo grafo::transpor() { 
    grafo g(v); 
    for (int u = 0; u < v; u++) 
        for(const auto& w : adj[u]) 
            g.adj[w.first].push_back(make_pair(u, w.second)); 
    return g; 
} 

int grafo::prim(int raiz) { 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    vector<int> dist(v, INT_MAX);
    vector<int> mst(v, -1);
    vector<bool> visitado(v, false);
	int total = 0;
    pq.push(make_pair(0, raiz));
    dist[raiz] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
		if(visitado[u] == true) continue;
        visitado[u] = true;
        for (const auto& w : adj[u]) {
            if (!visitado[w.first] && dist[w.first] > w.second) {
                dist[w.first] = w.second;
                pq.push(make_pair(w.second, w.first));
                mst[w.first] = u;
            }
        }
	}
	for (int i = 0; i < v; i++) total += dist[i];
    return total;
}

void grafo::dfsR(int raiz, vector<bool> &visitado) {
    visitado[raiz] = true;
    for (const auto& x : adj[raiz]) 
        if (!visitado[x.first]) 
            dfsR(x.first, visitado); 
}

int grafo::isSC() { 
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
	int n, m, a, b, c;
	while (cin >> n >> m) {
		grafo g(n);
		while (m--) {
			cin >> a >> b >> c;
			g.aresta(a-1, b-1, c);
		}
		if (!g.isSC()) cout << "impossivel\n";
		else cout << g.prim(0) << endl;
	}
	return 0;
}