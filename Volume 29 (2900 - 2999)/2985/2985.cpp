#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, h, d, total = 1, atualI, atualF;
	vector<pair<int, int>> atividades;
	cin >> n;
	while (n--) {
		cin >> h >> d;
		atividades.push_back(make_pair(h, h+d));
	}
	sort(atividades.begin(), atividades.end());
	atualI = atividades[0].first;
	atualF = atividades[0].second;
	for (int i = 1; i < atividades.size(); i++) {
		if (atividades[i].first >= atualF) {
			atualI = atividades[i].first;
			atualF = atividades[i].second;
			total++;
		}
		if (atividades[i].second < atualF) atualF = atividades[i].second;
	}
	cout << total << endl;
	return 0;
}