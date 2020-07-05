#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k, a, b;
	while (cin >> n >> m >> k) {
		n++;
		vector<vector<bool>> grafo(n, vector<bool>(n, 0));
		multimap<int, int> mapa;
		vector<int> v(n, 0);
		vector<bool> convidados(n, 1);
		while (m--) {
			cin >> a >> b;
			grafo[a-1][b-1] = grafo[b-1][a-1] = 1;
			v[a-1]++, v[b-1]++;
		}
		for (int i = 0; i < n; i++)
			mapa.insert({v[i], i});
		while (!mapa.empty()) {
			auto it = mapa.begin();
			if (it->first != v[it->second]) {
				mapa.insert({v[it->second], it->second});
			}
			else if (it->first == 0 && k != 0) {
				convidados[it->second] = 0;
			}
			else if (it->first < k) {
				for (int i = 0; i < n; i++) {
					if (grafo[it->second][i]) {
						grafo[it->second][i] = grafo[i][it->second] = 0;
						v[it->second]--, v[i]--;
						mapa.insert({v[it->second], i});
					}
				}
				convidados[it->second] = 0;
			}
			mapa.erase(it);
		}
		n--;
		bool flag2 = 0;
		for (int i = 0; i < n; i++) {
			if (convidados[i]) {
				if (flag2) cout << " ";
				cout << i+1;
				flag2 = 1;
			}
		}
		if (!flag2) cout << 0;
		cout << endl;
	}
	return 0;
}