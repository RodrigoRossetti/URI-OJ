#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	while (cin >> n >> m) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.rbegin(), v.rend());
		int total = 0;
		for (int i = 0; m--; i++) total += v[i];
		cout << total << endl;
	}
	return 0;
}