#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t, k;
	string s;
	cin >> n >> t;
	vector<priority_queue<string, vector<string>, greater<string>>> v(t);
	priority_queue<pair<int, string>> pq;
	while (n--) {
		cin >> s >> k;
		pq.push({k, s});
	}
	int i = 0;
	while (!pq.empty()) {
		if (i == t) i = 0;
		v[i].push(pq.top().second);
		pq.pop();
		i++;
	}
	for (int i = 0; i < t; i++) {
		cout << "Time " << i+1 << endl;
		while (!v[i].empty()) {
			cout << v[i].top() << endl;
			v[i].pop();
		}
		cout << endl;
	}
	return 0;
}