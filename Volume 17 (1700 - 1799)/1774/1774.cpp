#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	vector<int> prim(int raiz);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, int>>[v];
}

void grafo::aresta(int u, int w, int k) {
	adj[u].push_back(make_pair(w, k));
	adj[w].push_back(make_pair(u, k));
}

vector<int> grafo::prim(int raiz) { 
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; 
    vector<int> dist(v, INT_MAX); 
    vector<int> mst(v, -1); 
    vector<bool> visitado(v, false); 
    pq.push(make_pair(0, raiz)); 
    dist[raiz] = 0; 

    while (!pq.empty()) { 
        int u = pq.top().second; 
        pq.pop(); 
		if(visitado[u] == true) continue;
        visitado[u] = true; 
        for (auto w : adj[u]) {  
            if (!visitado[w.first] && dist[w.first] > w.second) { 
                dist[w.first] = w.second; 
                pq.push(make_pair(w.second, w.first)); 
                mst[w.first] = u; 
            } 
        } 
    } 
    return dist;
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r, c, v, w, p;
	cin >> r >> c;
	grafo g(r);
	while (c--) {
		cin >> v >> w >> p;
		g.aresta(v-1, w-1, p);
	}
	vector<int> dist = g.prim(0);
	int total = 0;
	for (int i = 0; i < dist.size(); i++) total += dist[i];
	cout << total << endl;
	return 0;
}