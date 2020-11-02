#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(1);
	int ev1, ev2, at, d;
	while (cin >> ev1 >> ev2 >> at >> d && (ev1 || ev2 || at || d)) {
		double n1 = ceil((double)ev1/d), n2 = ceil((double)ev2/d), ans;
		if (at == 3) ans = (1.0-n2/(n1+n2));
		else {
			double p = (double)at/6, q = (double)1-p;
			ans = (1.0-pow(q/p, n1))/(1.0-pow(q/p, n1+n2));
		}
		cout << ans*100 << endl;
	}
	return 0;
}