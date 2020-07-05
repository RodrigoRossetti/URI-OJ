#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, at, ad, bt, bd, h;
	cin >> t;
	while (t--) {
		cin >> at >> ad >> bt >> bd >> h;
		bool flag = 1;
		int i = 0, j = 0;
		while (h > 0) {
			if (i == 0) flag = 1, h -= at, i += ad;
			if (j == 0 && h > 0) flag = 0, h -= bt, j += bd;
			if (i) i--;
			if (j) j--;
		}
		cout << (flag ? "Andre\n" : "Beto\n");
	}
	return 0;
}