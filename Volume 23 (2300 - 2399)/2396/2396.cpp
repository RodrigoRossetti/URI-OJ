#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, total;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		total = 0;
		for (int j = 0; j < m; j++) {
			cin >> x;
			total += x;
		}
		pq.push(make_pair(total, i));
	}
	for (int k = 0; k < 3; k++) {
		cout << pq.top().second << endl;
		pq.pop();
	}
	return 0;
}