#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, n, k;
	cin >> p;
	while (p--) {
		cin >> n;
		vector<pair<int, bool>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> k;
			if (k >= 0) v[i] = make_pair(abs(k), 1);
			else v[i] = make_pair(abs(k), 0);
		}
		sort(v.begin(), v.end());
		int total = 1;
		for (int i = 1; i < n; i++)
			if (v[i].second != v[i-1].second) total++;
		cout << total << endl;
	}
	return 0;
}