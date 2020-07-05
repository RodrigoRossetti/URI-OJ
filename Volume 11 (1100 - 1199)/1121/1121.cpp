#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, s, total, dir, x, y;
	char c;
	vector<vector<char>> v;
	while (cin >> n >> m >> s && n && m && s) {
		total = 0;
		v.clear();
		for (int i = 0; i < n; i++) {
			vector<char> aux;
			for (int j = 0; j < m; j++) {
				cin >> c;
				if (c == 'N') x = i, y = j, dir = 0;
				else if (c == 'S') x = i, y = j, dir = 2;
				else if (c == 'L') x = i, y = j, dir = 1;
				else if (c == 'O') x = i, y = j, dir = 3;
				aux.push_back(c);
			}
			v.push_back(aux);
		}
		while (s--) {
			cin >> c;
			if (c == 'D') dir == 3 ? dir = 0 : dir++;
			else if (c == 'E') dir == 0 ? dir = 3 : dir--;
			else if (c == 'F') {
				if (dir == 0) {
					if (x-1 == -1 || v[x-1][y] == '#') continue;
					if (v[x-1][y] == '*') total++, v[x-1][y] = '.';
					x--;
				}
				else if (dir == 1) {
					if (y+1 == m || v[x][y+1] == '#') continue;
					if (v[x][y+1] == '*') total++, v[x][y+1] = '.';
					y++;
				}
				else if (dir == 2) {
					if (x+1 == n || v[x+1][y] == '#') continue;
					if (v[x+1][y] == '*') total++, v[x+1][y] = '.';
					x++;
				}
				else if (dir == 3) {
					if (y-1 == -1 || v[x][y-1] == '#') continue;
					if (v[x][y-1] == '*') total++, v[x][y-1] = '.';
					y--;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}