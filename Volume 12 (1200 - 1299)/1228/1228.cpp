#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n) {
		vector<int> v(n), v2(n);
		unordered_map<int, int> m;
		for (int i = 0; i < n; i++) cin >> v[i];
		for (int i = 0; i < n; i++) {
			cin >> v2[i];
			m[v2[i]] = i;
		}
		int total = 0;
		for (int i = 0; i < n; i++) {
			if (v[i] != v2[i]) {
				do {
					int k = m[v[i]];
					swap(v2[k], v2[k-1]);
					swap(m[v2[k]], m[v2[k-1]]);
					total++;
				} while (v[i] != v2[i]);
			}
		}
		cout << total << endl;
	}
	return 0;
}