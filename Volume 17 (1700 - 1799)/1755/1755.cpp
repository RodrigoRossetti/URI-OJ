#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, d, n;
	double k;
	cin >> t;
	cout << fixed << setprecision(2);
	while (t--) {
		cin >> d >> n;
		double maior = DBL_MIN;
		for (int i = 0; i < n; i++) {
			cin >> k;
			if (k <= d) maior = max(maior, d-k*floor(d/k));
		}
		cout << maior << endl;
	}
	return 0;
}