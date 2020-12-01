#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	while (cin >> n) {
		vector<pair<int, int>> v(n);
		for (auto& x : v) cin >> x.first >> x.second;
		sort(v.begin(), v.end());
		int s = v[0].first, e = v[0].second, total = 1;
		for (int i = 1; i < n; i++) {
			if (v[i].first <= e) s = v[i].first, e = min(e, v[i].second);
			else s = v[i].first, e = v[i].second, total++;
		}
		cout << total << endl;
	}
	return 0;
}