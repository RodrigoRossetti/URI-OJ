#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int g, p, s, k;
	while (cin >> g >> p && (g || p)) {
		vector<vector<int>> v(g, vector<int>(p));
		priority_queue<pair<int, int>> pq;
		map<int, int, greater<int>> pontos;
		for (int i = 0; i < g; i++)
			for (int j = 0; j < p; j++)
				cin >> v[i][j];
		cin >> s;
		while (s--) {
			pontos.clear();
			cin >> k;
			vector<int> sis(k);
			for (int i = 0; i < k; i++) cin >> sis[i];
			for (int i = 0; i < g; i++) {
				for (int j = 0; j < p; j++) {
					if (v[i][j]-1 < k) {
						pontos[j] += sis[v[i][j]-1];
						pq.push({pontos[j], j});
					}
				}
			}
			int maior = pq.top().first;
			vector<int> out;
			while (!pq.empty()) {
				if (maior != pq.top().first) break;
				out.push_back(pq.top().second+1);
				pq.pop();
			}
			while (!pq.empty()) pq.pop();
			bool flag = 0;
			for (int i = out.size()-1; i >= 0; i--) {
				if (flag) cout << " ";
				cout << out[i];
				flag = 1;
			}
			cout << endl;
		}
	}
	return 0;
}