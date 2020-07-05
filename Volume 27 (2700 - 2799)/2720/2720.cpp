#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {
	if (p1.first > p2.first) return true;
	if (p1.first == p2.first && p1.second < p2.second) return true;
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k, c, h, w, l;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> c >> h >> w >> l;
			v[i].first = h*w*l;
			v[i].second = c;
		}
		sort(v.begin(), v.end(), comp);
		priority_queue<int, vector<int>, greater<int>> pq;
		for (int i = 0; k; i++, k--)
			pq.push(v[i].second);
		while (!pq.empty()) {
			cout << pq.top() << (pq.size() > 1 ? " " : "\n");
			pq.pop();
		}
	}
	return 0;
}