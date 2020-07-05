#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, int>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, int k);
	void imprime();
	int prim(int raiz);
	int primMax(int raiz);
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

int grafo::primMax(int raiz) { 
    priority_queue<pair<int, int>> pq; 
    vector<int> dist(v, INT_MIN);
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
            if (!visitado[w.first] && dist[w.first] < w.second) {
                dist[w.first] = w.second;
                pq.push(make_pair(w.second, w.first));
                mst[w.first] = u;
            }
        }
	}
	for (int i = 0; i < v; i++) total += dist[i];
    return total;
}

int main() {
	int n, x, y, k, total = 0, maior = -1;
	cin >> n;
	vector<tuple<int, int, int>> v(n);
	for (int i = 0; i < n; i++) {
		cin >> x >> y >> k;
		total += k;
		v[i] = make_tuple(x-1, y-1, k);
		maior = max(x, max(y, maior));
	}
	grafo g(maior);
	while (n--) g.aresta(get<0>(v[n]), get<1>(v[n]), get<2>(v[n]));
	cout << g.primMax(0) << endl << g.prim(0) << endl;
	return 0;
}