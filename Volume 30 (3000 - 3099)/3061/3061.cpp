#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int n, m;
bool arr[1001][1001];

void test(queue<pair<int, int>>& q, int i, int j) {
	if (i >= 0 && j >= 0 && i < n && j < m && arr[i][j]) {
		arr[i][j] = 0;
		q.push({i, j});
	}
}

void bfs(int i ,int j) {
	arr[i][j] = 0;
	queue<pair<int, int>> q;
	q.push({i, j});
	while (!q.empty()) {
		i = q.front().first;
		j = q.front().second;
		q.pop();
		test(q, i-1, j);
		test(q, i+1, j);
		test(q, i, j-1);
		test(q, i, j+1);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];
	int total = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j]) {
				bfs(i, j);
				total++;
			}
		}
	}
	cout << total << endl;
	return 0;
}