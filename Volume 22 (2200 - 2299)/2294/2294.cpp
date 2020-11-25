#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int n, m;
int arr[11][11];
bool vis[11][11];

void test(queue<pair<int, pair<int, int>>>& q, int x, int y, int d) {
	if (x >= 0 && y >= 0 && x < n && y < m && !vis[x][y] && arr[x][y] != 2) {
		vis[x][y] = 1;
		q.push({d, {x, y}});
	}
}

int bfs(int x, int y) {
	int d;
	vis[x][y] = 1;
	queue<pair<int, pair<int, int>>> q;
	q.push({0, {x, y}});
	while (!q.empty()) {
		x = q.front().second.first;
		y = q.front().second.second;
		d = q.front().first;
		if (arr[x][y] == 0) break;
		q.pop();
		test(q, x-1, y, d+1);
		test(q, x+1, y, d+1);
		test(q, x, y-1, d+1);
		test(q, x, y+1, d+1);
	}
	return d;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x, y;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 3) x = i, y = j;
		}
	}
	cout << bfs(x, y) << endl;
	return 0;
}