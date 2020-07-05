#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n) {
		vector<string> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		int total = 0, k = v[0].size();
		sort(v.begin(), v.end());
		for (int i = 1; i < n; i++) {
			for (int j = 0; j < k; j++) {
				if (v[i-1][j] == v[i][j]) total++;
				else break;
			}
		}
		cout << total << endl;
	}
	return 0;
}