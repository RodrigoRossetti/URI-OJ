#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, g, s, r;
	while (cin >> n >> g) {
		int total = 0;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> s >> r;
			v[i] = s-r;
		}
		sort(v.rbegin(), v.rend());
		for (int i = 0; i < n; i++) {
			if (v[i] > 0) total += 3;
			else if (g > abs(v[i])) {
				g -= abs(v[i])+1;
				total += 3;
			}
			else if (g == abs(v[i])) {
				g -= abs(v[i])+1;
				total++;
			}
			else if (v[i] == 0) total++;
		}
		cout << total << endl;
	}
	return 0;
}