#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int pontos, vitorias, gols;
	string nome;
} times;

bool comp(times a, times b) {
	return  (a.pontos > b.pontos || (a.pontos == b.pontos && a.vitorias > b.vitorias) ||
			(a.pontos == b.pontos && a.vitorias == b.vitorias && a.gols > b.gols));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m, x, y;
	string a, b;
	cin >> t;
	while (t--) {
		cin >> n >> m >> ws;
		vector<times> camp(n);
		unordered_map<string, int> ind;
		for (int i = 0; i < n; i++) {
			cin >> a;
			times aux;
			aux.pontos = aux.vitorias = aux.gols = 0;
			aux.nome = a;
			camp[i] = aux;
			ind[a] = i;
		}
		while (m--) {
			cin >> x >> a >> y >> b;
			int i = ind[a], j = ind[b];
			camp[i].gols += x, camp[j].gols += y;
			if (x > y) camp[i].pontos += 3, camp[i].vitorias++;
			else if (y > x) camp[j].pontos += 3, camp[j].vitorias++;
			else camp[i].pontos++, camp[j].pontos++;
		}
		stable_sort(camp.begin(), camp.end(), comp);
		for (int i = 0; i < n; i++) cout << camp[i].nome << endl;
	}
	return 0;
}