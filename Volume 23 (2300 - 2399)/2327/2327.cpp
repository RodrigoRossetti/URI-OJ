#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> v[i][j];
	vector<int> linhas(n), colunas(n);
	int dig1 = 0, dig2 = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i+j == n-1) dig1 += v[i][j];
			if (i == j) dig2 += v[i][j];
			linhas[i] += v[j][i];
			colunas[i] += v[i][j];
		}
	}
	bool flag = 1;
	for (int i = 1; i < n; i++) {
		if (linhas[i-1] != linhas[i] || colunas[i-1] != colunas[i] || linhas[i] != colunas[i]
			|| dig1 != dig2 || dig1 != linhas[i]) {
				flag = 0;
				break;
			}
	}
	cout << (flag ? dig1 : -1) << endl;
	return 0;
}