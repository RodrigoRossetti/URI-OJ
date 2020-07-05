#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, s, c, r;
	cout << fixed << setprecision(2);
	cin >> t;
	while (t--) {
		cin >> s >> c >> r;
		vector<int> v(s);
		for (int i = 0; i < s; i++) cin >> v[i];
		sort(v.begin(), v.end());
		double total = 0;
		for (int i = 0; i < s; i++) {
			if (c) total += (double)1/(v[i]+r), c--;
			else total += (double)1/v[i];
		}
		cout << total << endl;
	}
	return 0;
}