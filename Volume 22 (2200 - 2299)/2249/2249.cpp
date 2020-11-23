#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

map<int, string> nome, sobrenome;

bool comp(pair<int, int> a, pair<int, int> b) {
	int x = a.first, y = b.first;
	return (sobrenome[x] < sobrenome[y] || sobrenome[x] == sobrenome[y] && nome[x] < nome[y]);
}

struct grafo {

	int v;
	vector<vector<pair<int, int>>> adj;

	grafo(int v) {
		this->v = v;
		adj = vector<vector<pair<int, int>>>(v);
	}

	void aresta(int u, int w, int k) {
		adj[u].push_back({w, k});
		adj[w].push_back({u, k});
	}

	vector<pair<int, int>> dijkstra(int raiz, int chave) {
		priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
		vector<int> dist(chave, 100000);
		vector<bool> visitado(chave, 0);
		pq.push({0, raiz});
		dist[raiz] = 0;
		while (!pq.empty()) {
			int u = pq.top().second;
			pq.pop();
			visitado[u] = 1;
			for (const auto& w : adj[u]) {
				if (!visitado[w.first] && dist[u] + w.second < dist[w.first]) {
					dist[w.first] = dist[u] + w.second;
					pq.push({dist[w.first], w.first});
				}
			}
		}
		vector<pair<int, int>> aux(chave);
		for (int i = 0; i < dist.size(); i++)
			aux[i] = {i, dist[i]};
		return aux;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, chave, caso = 1;
	string s, aux, aux2;
	while (cin >> a >> ws && a) {
		grafo g(1000);
		map<string, int> m;
		nome.clear();
		sobrenome.clear();
		m["P. Erdos"] = 0;
		nome[0] = "P.";
		sobrenome[0] = "Erdos";
		chave = 1;
		while (a--) {
			getline(cin, s);
			stringstream ss(s);
			vector<int> v;
			while (getline(ss, s, ',')) {
				if (s[s.length()-1] == '.') s.pop_back();
				if (s[0] == ' ') s = s.substr(1, s.length()-1);
				if (!m.count(s)) {
					m[s] = chave;
					stringstream c(s);
					getline(c, aux, ' ');
					getline(c, aux2, ' ');
					nome[chave] = aux;
					sobrenome[chave] = aux2;
					chave++;
				}
				v.push_back(m[s]);
			}
			for (int i = 0; i < v.size(); i++)
				for (int j = i+1; j < v.size(); j++)
					g.aresta(v[i], v[j], 1);
		}
		cout << "Teste " << caso++ << endl;
		vector<pair<int, int>> dist = g.dijkstra(0, chave);
		sort(dist.begin()+1, dist.end(), comp);
		for (int i = 1; i < chave; i++) {
			cout << nome[dist[i].first] << " " << sobrenome[dist[i].first] << ": ";
			if (dist[i].second == 100000) cout << "infinito\n";
			else cout << dist[i].second << endl;
		}
		cout << endl; 
	}
	return 0;
}