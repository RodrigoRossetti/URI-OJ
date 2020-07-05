#include <bits/stdc++.h>
using namespace std;

int n, m, total = 0;
vector<vector<bool>> v;

void backtracking(int x, int y) {
	if (v[x][y] == 0) total++;
	v[x][y] = 1;
	if (x-1 >= 0 && y-1 >= 0 && v[x-1][y-1] == 0) backtracking(x-1, y-1);
	if (x-1 >= 0 && v[x-1][y] == 0) backtracking(x-1, y);
	if (y-1 >= 0 && v[x][y-1] == 0) backtracking(x, y-1);
	if (x+1 < n && y+1 < m && v[x+1][y+1] == 0) backtracking(x+1, y+1);
	if (x+1 < n && v[x+1][y] == 0) backtracking(x+1, y);
	if (y+1 < m && v[x][y+1] == 0) backtracking(x, y+1);
	if (x+1 < n && y-1 >= 0 && v[x+1][y-1] == 0) backtracking(x+1, y-1);
	if (x-1 >= 0 && y+1 < m && v[x-1][y+1] == 0) backtracking(x-1, y+1);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y, k, a, b;
	cin >> n >> m >> x >> y >> k;
	v = vector<vector<bool>>(n, vector<bool>(m, 0));
	while (k--) {
		cin >> a >> b;
		v[a-1][b-1] = 1;
	}
	backtracking(x-1, y-1);
	cout << total << endl;
	return 0;
}