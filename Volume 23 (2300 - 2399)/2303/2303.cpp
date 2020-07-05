#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int l, c, m, n;
	cin >> l >> c >> m >> n;
	vector<vector<int>> v(l, vector<int>(c));
	for (int i = 0; i < l; i++)
		for (int j = 0; j < c; j++)
			cin >> v[i][j];
	int maior = 0;
	for (int i = 0; i <= l-m; i += m) {
		for (int j = 0; j <= c-n; j += n) {
			int atual = 0;
			for (int k1 = i; k1 < i+m; k1++) {
				for (int k2 = j; k2 < j+n; k2++) {
					atual += v[k1][k2];
				}
			}
			maior = max(maior, atual);
		}
	}
	cout << maior << endl;
	return 0;
}