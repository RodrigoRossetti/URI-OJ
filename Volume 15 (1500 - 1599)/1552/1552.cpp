#include <bits/stdc++.h>
using namespace std;

class grafo {
	int v;
	vector<pair<int, double>> *adj;
public:
	grafo(int v);
	void aresta(int u, int w, double k);
	void imprime();
	double prim(int raiz);
};

grafo::grafo(int v) {
	this->v = v;
	adj = new vector<pair<int, double>>[v];
}

void grafo::aresta(int u, int w, double k) {
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

double grafo::prim(int raiz) { 
    priority_queue<pair<double, int>, vector<pair<double, int>>, greater<pair<double, int>>> pq; 
    vector<double> dist(v, DBL_MAX);
    vector<int> mst(v, -1);
    vector<bool> visitado(v, false);
	double total = 0;
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

int main() {
	int c, n, x, y;
	scanf("%d", &c);
	while (c--) {
		scanf("%d", &n);
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &x, &y);
			v[i] = make_pair(x, y);
		}
		grafo g(n);
		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				double xd = (v[i].first - v[j].first);
				double yd = (v[i].second - v[j].second);
				g.aresta(i, j, (double)sqrt(xd*xd+yd*yd));
			}
		}
		printf("%.2lf\n", g.prim(0)/100);
	}
	return 0;
}