#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int a, b;
int arr[101][101];

void test(int x, int y, vector<vector<bool>>& visitado, queue<pair<int, int>>& q) {
	if (x >= 0 && x < a && y >= 0 && y < b && arr[x][y] && !visitado[x][y]) {
		visitado[x][y] = 1;
		q.push({x, y});
	}
}

int bfs(int x, int y) {
	vector<vector<bool>> visitado(a, vector<bool>(b, 0));
	visitado[x][y] = 1;
	queue<pair<int, int>> q;
	q.push({x, y});
	q.push({-1, -1});
	int total = 0;
	while (q.size() > 1) {
		x = q.front().first;
		y = q.front().second;
		q.pop();
		if (x == -1) {
			total++;
			q.push({-1, -1});
			continue;
		}
		test(x-1, y, visitado, q);
		test(x, y-1, visitado, q);
		test(x+1, y, visitado, q);
		test(x, y+1, visitado, q);
		test(x-1, y-1, visitado, q);
		test(x+1, y+1, visitado, q);
		test(x+1, y-1, visitado, q);
		test(x-1, y+1, visitado, q);
	}
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, x, y;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		vector<vector<int>> v(a, vector<int>(b));
		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)
				cin >> arr[i][j];
		cin >> x >> y;
		x--, y--;
		cout << bfs(x, y) << endl;
	}
	return 0;
}