#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, q, e, a, b;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) v[i] = i;
	cin >> q;
	while (q--) {
		cin >> e;
		if (e == 1) {
			cin >> a >> b;
			a--, b--;
			swap(v[a], v[b]);
		}
		else if (e == 2) {
			cin >> a;
			a--;
			int x = a, total = 0;
			while (v[x] != a) {
				x = v[x];
				total++;
			}
			cout << total << endl;
		}
	}
	return 0;
}