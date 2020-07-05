#include <bits/stdc++.h>
using namespace std;

void backtrack(vector<vector<int>> &v, vector<vector<bool>> &visitado, int &total, int n, int i, int j) {
	total++;
	visitado[i][j] = 1;
	if (i > 0 && !visitado[i-1][j] && v[i-1][j] >= v[i][j]) backtrack(v, visitado, total, n, i-1, j);
	if (i < n-1 && !visitado[i+1][j] && v[i+1][j] >= v[i][j]) backtrack(v, visitado,total, n, i+1, j);
	if (j > 0 && !visitado[i][j-1] && v[i][j-1] >= v[i][j]) backtrack(v, visitado, total, n, i, j-1);
	if (j < n-1 && !visitado[i][j+1] && v[i][j+1] >= v[i][j]) backtrack(v, visitado, total, n, i, j+1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	vector<vector<bool>> visitado(n, vector<bool>(n, 0));
	cin >> a >> b;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> v[i][j];
	int total = 0;
	backtrack(v, visitado, total, n, a-1, b-1);
	cout << total << endl;
	return 0;
}