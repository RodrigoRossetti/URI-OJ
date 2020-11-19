#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct Edge {
	int u, v;
	double weight;
	Edge() {}
	Edge(int u, int v, double weight) {
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

	void insert(int u, int v, double w) {
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

	void kruskal(double t) {
		int total = 0;
		double custo = 0;
		vector<Edge> mst;
		sort(edges.begin(), edges.end());
		for (auto& e : edges) {
			if (find_set(e.u) != find_set(e.v)) {
				custo += e.weight;
				if (e.weight > t) total++;
				mst.push_back(e);
				union_sets(e.u, e.v);
			}
		}
		cout << custo+2*total << " " << total << endl;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(2);
	int q, c, x, y;
	double t, z;
	while (cin >> q >> c >> t && (q || c || t)) {
		unionfind uf(q);
		while (c--) {
			cin >> x >> y >> z;
			uf.insert(x-1, y-1, z);
		}
		uf.kruskal(t);
	}
	return 0;
}