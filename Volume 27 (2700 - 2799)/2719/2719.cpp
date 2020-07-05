#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, m, x;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int total = 1, k = 0;
		while (n--) {
			cin >> x;
			k += x;
			if (k > m) k = x, total++;
		}
		cout << total << endl;
	}
	return 0;
}