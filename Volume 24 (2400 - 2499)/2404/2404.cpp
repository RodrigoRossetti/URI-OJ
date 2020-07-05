#include <bits/stdc++.h>
using namespace std;

#define INF 99999999

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	void imprime();
	unsigned long long prim(int raiz);
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

unsigned long long grafo::prim(int raiz) { 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    vector<int> dist(v, INF); 
    vector<int> mst(v, -1); 
    vector<bool> visitado(v, false);
	unsigned long long total = 0; 
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
	for (int i = 0; i < v; i++)
		total += dist[i];
    return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, y, z;
	cin >> n >> m;
	grafo g(n);
	unsigned long long total = 0;
	while (m--) {
		cin >> x >> y >> z;
		g.aresta(x-1, y-1, z);
	}
	cout << g.prim(0) << endl;
	return 0;
}