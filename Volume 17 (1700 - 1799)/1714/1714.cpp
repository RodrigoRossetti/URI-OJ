#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y;
	vector<vector<char>> v(101, vector<char>(101));
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> v[i][j];
	int menor = INT_MAX;
	for (int i = 0; i < 1024; i++) {
		vector<vector<bool>> visitado(n, vector<bool>(n, 0));
		bitset<10> tipo(i);
		queue<pair<int, int>> q;
		int prof = 0;
		if (((isupper(v[0][0]) && tipo[v[0][0]-'A']) || (islower(v[0][0]) && !tipo[v[0][0]-'a'])) &&
			n > 1) {
			q.push({0, 0});
			q.push({-1, -1});
			while (q.size() > 1) {
				pair<int, int> pos = q.front();
				x = pos.first, y = pos.second;
				q.pop();
				if (pos.first == -1) {
					prof++;
					q.push({-1, -1});
					continue;
				}
				if (pos.first == n-1 && pos.second == n-1) {
					if ((isupper(v[x][y]) && tipo[v[x][y]-'A']) ||
						(islower(v[x][y]) && !tipo[v[x][y]-'a']))
							menor = min(menor, prof+1);
					break;
				}
				visitado[x][y] = 1;
				if (x != 0 && !visitado[x-1][y] && ((isupper(v[x-1][y]) && tipo[v[x-1][y]-'A']) ||
				(islower(v[x-1][y]) && !tipo[v[x-1][y]-'a'])))
					q.push({x-1, y});
				if (y != 0 && !visitado[x][y-1] && ((isupper(v[x][y-1]) && tipo[v[x][y-1]-'A']) ||
				(islower(v[x][y-1]) && !tipo[v[x][y-1]-'a'])))
					q.push({x, y-1});
				if (x != n-1 && !visitado[x+1][y] && ((isupper(v[x+1][y]) && tipo[v[x+1][y]-'A']) ||
				(islower(v[x+1][y]) && !tipo[v[x+1][y]-'a'])))
					q.push({x+1, y});
				if (y != n-1 && !visitado[x][y+1] && ((isupper(v[x][y+1]) && tipo[v[x][y+1]-'A']) ||
				(islower(v[x][y+1]) && !tipo[v[x][y+1]-'a'])))
					q.push({x, y+1});
			}
		}
	}
	if (menor == INT_MAX) cout << "-1\n";
	else cout << menor << endl;
	return 0;
}