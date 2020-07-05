#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, c, m, t = 1;
	while (cin >> n && n) {
		vector<pair<int, int>> v(n);
		int maior = 0;
		for (int i = 0; i < n; i++) {
			cin >> c >> m;
			v[i] = {c, m};
			maior = max(maior, m);
		}
		cout << "Turma " << t++ << endl;
		for (int i = 0; i < n; i++)
			if (v[i].second == maior) cout << v[i].first << " ";
		cout << endl << endl;
	}
	return 0;
}