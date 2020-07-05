#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, s, x, y, k, ex1 = 0, ex2 = 0;
	cin >> n >> m >> s;
	double rate = (double)n/m;
	while (s--) {
		cin >> x >> y >> k;
		if (rate*y < x) ex1 += k;
		else ex2 += k;
	}
	cout << ex2 << " " << ex1 << endl;
	return 0;
}