#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 1000000

typedef pair<int, int> pii;
typedef pair<int, pii> piii;

int c, r, ct, rt;
bool arr[1001][1001];
bool vis[1001][1001];

void test(priority_queue<piii, vector<piii>, greater<piii>>& q,
		vector<vector<int>>& dist, int x, int y, int d) {
	if (x < r && y < c && x >= 0 && y >= 0 && arr[x][y] && !vis[x][y] && d < dist[x][y]) {
		dist[x][y] = d;
		q.push({d, {x, y}});
	}
}

int dijkstra(int y, int x) {
	priority_queue<piii, vector<piii>, greater<piii>> pq;
	vector<vector<int>> dist(r, vector<int>(c, 1000000));
	pq.push({0, {x, y}});
	dist[x][y] = 0;
	int d;
	while (!pq.empty()) {
		d = pq.top().first;
		x = pq.top().second.first;
		y = pq.top().second.second;
		pq.pop();
		vis[x][y] = 1;
		if (vis[rt][ct]) break;

		test(pq, dist, x-1, y, d+2);
		test(pq, dist, x-2, y, d+5);
		test(pq, dist, x+1, y, d+2);
		test(pq, dist, x+2, y, d+5);
		test(pq, dist, x, y-1, d+2);
		test(pq, dist, x, y-2, d+5);
		test(pq, dist, x, y+1, d+2);
		test(pq, dist, x, y+2, d+5);

		test(pq, dist, x+1, y+1, d+3);
		test(pq, dist, x+2, y+2, d+7);
		test(pq, dist, x-1, y-1, d+3);
		test(pq, dist, x-2, y-2, d+7);
		test(pq, dist, x+1, y-1, d+3);
		test(pq, dist, x+2, y-2, d+7);
		test(pq, dist, x-1, y+1, d+3);
		test(pq, dist, x-2, y+2, d+7);

		test(pq, dist, x+2, y+1, d+6);
		test(pq, dist, x+1, y+2, d+6);
		test(pq, dist, x-2, y-1, d+6);
		test(pq, dist, x-1, y-2, d+6);
		test(pq, dist, x+2, y-1, d+6);
		test(pq, dist, x+1, y-2, d+6);
		test(pq, dist, x-2, y+1, d+6);
		test(pq, dist, x-1, y+2, d+6);

	}
	return dist[rt][ct];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int cf, rf, w, c1, r1, c2, r2;
	while (cin >> c >> r && (c || r)) {
		for (int i = 0; i < r; i++)
			for (int j = 0; j < c; j++)
				arr[i][j] = 1, vis[i][j] = 0;
		cin >> cf >> rf >> ct >> rt;
		cf--, rf--, ct--, rt--;
		cin >> w;
		while (w--) {
			cin >> c1 >> r1 >> c2 >> r2;
			c1--, r1--, c2--, r2--;
			for (int i = r1; i <= r2; i++)
				for (int j = c1; j <= c2; j++)
					arr[i][j] = 0;
		}
		int r = dijkstra(cf, rf);
		if (r == INF) cout << "impossible\n";
		else cout << r << endl;
	}
	return 0;
}