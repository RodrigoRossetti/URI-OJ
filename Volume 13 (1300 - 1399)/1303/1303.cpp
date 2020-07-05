#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int id, pontos, marcados, recebidos;
	double media;
} times;

bool comp(times a, times b) {
	return (a.pontos > b.pontos || (a.pontos == b.pontos && a.media > b.media) ||
		   (a.pontos == b.pontos && a.media == b.media && a.marcados > b.marcados) ||
		   (a.pontos == b.pontos && a.media == b.media && a.marcados == b.marcados && a.id > b.id));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y, z, w, k = 0;
	while (cin >> n && n) {
		if (k != 0) cout << endl;
		vector<times> rank(n);
		for (int i = 0; i < n; i++)
			rank[i].id = i, rank[i].pontos = 0, rank[i].marcados = 0, rank[i].recebidos = 0;
		for (int i = 0; i < n*(n-1)/2; i++) {
			cin >> x >> z >> y >> w;
			rank[x-1].marcados += z, rank[x-1].recebidos += w;
			rank[y-1].marcados += w, rank[y-1].recebidos += z;
			if (z > w) rank[x-1].pontos += 2, rank[y-1].pontos += 1;
			else rank[y-1].pontos += 2, rank[x-1].pontos += 1;
		}
		for (int i = 0; i < n; i++) {
			if (rank[i].recebidos == 0) rank[i].media = (double)rank[i].marcados;
			else rank[i].media = (double)rank[i].marcados/rank[i].recebidos;
		}
		sort(rank.begin(), rank.end(), comp);
		k++;
		cout << "Instancia " << k << endl;
		for (int i = 0; i < n; i++) 
			cout << rank[i].id+1 << (i < n-1 ? ' ' : '\n');
	}
	return 0;
}