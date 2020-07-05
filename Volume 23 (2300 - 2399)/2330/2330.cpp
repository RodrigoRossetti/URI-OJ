#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, l, t;
	cin >> n >> l;
	vector<int> total(n, 0);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pair<int, int> p;
	for (int i = 0; i < n; i++) pq.push({0, i});
	while (l--) {
		cin >> t;
		p = pq.top();
		pq.pop();
		p.first += t, total[p.second]++;
		pq.push(p);
	}
	for (int i = 0; i < n; i++) cout << i+1 << " " << total[i] << endl;
	return 0;
}