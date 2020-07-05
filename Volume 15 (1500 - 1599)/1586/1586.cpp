#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		vector<string> vs(n);
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> vs[i];
			v[i] = accumulate(vs[i].begin(), vs[i].end(), 0);
		}
		int l = 0, r = n+1, m, u1 = -1, u2 = -1;
		bool flag = 0;
		while (r > l) {
			m = (l+r)/2;
			long long a = 0, b = 0;
			for (int i = m, j = 1; i >= 0; i--, j++) a += v[i]*j;
			for (int i = m+1, j = 1; i < n; i++, j++) b += v[i]*j;
			if (u1 == l && u2 == r) break;
			u1 = l, u2 = r;
			if (a > b) r = m;
			else if (b > a) l = m;
			else {
				flag = 1;
				break;
			}
		}
		if (flag) cout << vs[m] << endl;
		else cout << "Impossibilidade de empate.\n";
	}
	return 0;
}