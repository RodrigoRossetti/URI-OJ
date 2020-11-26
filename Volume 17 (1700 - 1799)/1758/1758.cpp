#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(2);
	int t, p, n;
	double k, media, maior, maior2;
	cin >> t;
	while (t--) {
		cin >> p >> n;
		vector<double> v(n);
		for (int i = 0; i < n; i++) {
			maior = maior2 = media = 0;
			for (int j = 0; j < p; j++) {
				cin >> k;
				media += k;
				maior = max(maior, k);
				if (k < 7) maior2 = max(maior2, k);
			}
			media /= p;
			if (media >= 7) v[i] = maior;
			else if (media >= 4 && maior2 > media) v[i] = maior2;
			else v[i] = media;
		}
		for (auto& x : v) cout << x << endl;
	}
	return 0;
}