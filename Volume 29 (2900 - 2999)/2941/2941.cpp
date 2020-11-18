#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct Edge {
	int u, v, weight;
	Edge() {}
	Edge(int u, int v, int weight) {
		this->u = u, this->v = v, this->weight = weight;
	}
	bool operator<(Edge const& other) {
		return weight < other.weight;
	}
};

struct unionfind {
	int n;
	vector<int> parent, size;
	vector<Edge> edges, originais;

	unionfind(int n) {
		this->n = n;
		parent = vector<int>(n);
		iota(parent.begin(), parent.end(), 0);
		size = vector<int>(n, 1);
	}

	void insert(int u, int v, int w, bool b) {
		if (b) originais.push_back(Edge(u, v, w));
		else edges.push_back(Edge(u, v, w));
	}

	void union_sets(int a, int b) {
		a = find_set(a);
		b = find_set(b);
		if (a != b) {
			if (size[a] < size[b])
				swap(a, b);
			parent[b] = a;
			size[a] += size[b];
		}
	}

	int find_set(int v) {
		if (v == parent[v])
			return v;
		return parent[v] = find_set(parent[v]);
	}

	void print() {
		for (int i = 0; i < n; i++) {
			cout << i << " " << parent[i] << " " << size[i] << endl;
		}
		cout << endl;
	}

	int kruskal(int soma) {
		int custo = 0, aux = 0;
		sort(originais.rbegin(), originais.rend());
		for (auto& e : originais) {
			if (find_set(e.u) != find_set(e.v)) {
				aux += e.weight;
				union_sets(e.u, e.v);
			}
		}
		sort(edges.begin(), edges.end());
		for (auto& e : edges) {
			if (find_set(e.u) != find_set(e.v)) {
				custo += e.weight;
				union_sets(e.u, e.v);
			}
		}
		return custo+(soma-aux);
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, soma = 0;
	cin >> n;
	unionfind uf(n);
	vector<vector<int>> aux(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> aux[i][j];
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (aux[j][i]) {
				uf.insert(i, j, aux[i][j], 1);
				soma += aux[i][j];
			}
			else uf.insert(i, j, aux[i][j], 0);
		}
	}
	cout << uf.kruskal(soma) << endl;
	return 0;
}