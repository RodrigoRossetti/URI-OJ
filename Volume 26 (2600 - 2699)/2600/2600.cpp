#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b, c, d, e, f;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c >> d >> e >> f;
		if (a > 0 && a < 7 && b > 0 && b < 7 && c > 0 && c < 7 && d > 0 && d < 7 && e > 0 && e < 7 && f > 0 && f < 7) {
			vector<bool> v(8, 0);
			v[a] = v[b] = v[c] = v[d] = v[e] = v[f] = 1;
			if (a+f == 7 && b+d == 7 && c+e == 7 && accumulate(v.begin(), v.end(), 0) == 6) cout << "SIM\n";
			else cout << "NAO\n";
		}
		else cout << "NAO\n";
	}
	return 0;
}