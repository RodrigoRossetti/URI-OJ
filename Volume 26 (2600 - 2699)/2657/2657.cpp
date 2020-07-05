#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int pai;
	int rank;
	int ponto_max;
} UnionFind;

int find(UnionFind subconj[], int i) {  
    if (subconj[i].pai != i) 
        subconj[i].pai = find(subconj, subconj[i].pai); 
    return subconj[i].pai;
}  

void Union(UnionFind subconj[], int x, int y) {
    if (subconj[x].rank < subconj[y].rank)
		subconj[x].pai = y;
    else if (subconj[x].rank > subconj[y].rank)
		subconj[y].pai = x; 
    else
		subconj[y].pai = x, subconj[x].rank++;
	int k = max(subconj[x].ponto_max, subconj[y].ponto_max);
	subconj[x].ponto_max = subconj[y].ponto_max = k;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, q, v, chave = 0;
	string s1, s2;
	cin >> n >> m >> q;
	UnionFind subconj[n];
	vector<int> pontos(n);
	unordered_map<string, int> mapa;
	for (int u = 0; u < n; u++) {
		cin >> s1 >> v;
		pontos[u] = v;
		mapa[s1] = chave++;
		subconj[u].pai = u;
		subconj[u].rank = 0;
		subconj[u].ponto_max = v;
	}
	while (m--) {
		cin >> s1 >> s2;
		int a = find(subconj, mapa[s1]);
		int b = find(subconj, mapa[s2]);
		Union(subconj, a, b);
	}
	while (q--) {
		cin >> s1;
		int k = find(subconj, mapa[s1]);
		if (pontos[mapa[s1]] >= 5 || subconj[k].ponto_max <= 5) cout << "S\n";
		else cout << "N\n";
	}
	return 0;
}