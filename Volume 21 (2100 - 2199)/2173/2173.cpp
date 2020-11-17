#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct Edge {
	int u, v, weight;
	Edge() { }
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
	vector<Edge> edges;

	unionfind(int n) {
		this->n = n;
		parent = vector<int>(n);
		iota(parent.begin(), parent.end(), 0);
		size = vector<int>(n, 1);
	}

	void insert(int u, int v, int w) {
		edges.push_back(Edge(u, v, w));
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

	int kruskal(bool flag) {
		int custo = 0;
		vector<Edge> mst;
		if (flag) sort(edges.rbegin(), edges.rend());
		else sort(edges.begin(), edges.end());
		for (auto& e : edges) {
			if (find_set(e.u) != find_set(e.v)) {
				custo += e.weight;
				mst.push_back(e);
				union_sets(e.u, e.v);
			}
		}
		return custo;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, y, c;
	while (cin >> n >> m && (n || m)) {
		unionfind ufmin(n), ufmax(n);
		while (m--) {
			cin >> x >> y >> c;
			ufmax.insert(x-1, y-1, c);
			ufmin.insert(x-1, y-1, c);
		}
		cout << ufmax.kruskal(1)-ufmin.kruskal(0) << endl;
	}
	return 0;
}