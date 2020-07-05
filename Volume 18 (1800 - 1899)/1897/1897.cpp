#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, m;
	unordered_map<int, bool> mapa;
	cin >> n >> m;
	queue<long long> q;
	q.push(n);
	q.push(LLONG_MAX);
	long long total = 0;
	while (!q.empty()) {
		long long k = q.front();
		q.pop();
		if (k == LLONG_MAX) {
			total++;
			q.push(LLONG_MAX);
			continue;
		}
		if (mapa[k]) continue;
		mapa[k] = 1;
		if (k == m) break;
		q.push(k*2);
		q.push(k*3);
		q.push(k/2);
		q.push(k/3);
		q.push(k+7);
		q.push(k-7);
	}
	cout << total << endl;
	return 0;
}