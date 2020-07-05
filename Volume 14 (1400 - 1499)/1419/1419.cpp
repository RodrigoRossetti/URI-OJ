#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r, t1, t2;
	while (cin >> r && r) {
		bool flag = 1;
		t1 = t2  = 0;
		vector<int> m(r), l(r);
		for (int i = 0; i < r; i++) cin >> m[i];
		for (int i = 0; i < r; i++) cin >> l[i];
		for (int i = 0; i < r; i++) {
			t1 += m[i], t2 += l[i];
			if (flag && i > 1) {
				if (m[i-2] == m[i-1] && m[i-2] == m[i]) {
					if (l[i-2] != l[i-1] || l[i-2] != l[i]) t1 += 30;
					flag = 0;
				}
				if (l[i-2] == l[i-1] && l[i-2] == l[i]) {
					if (m[i-2] != m[i-1] || m[i-2] != m[i]) t2 += 30;
					flag = 0;
				}
			}
		}
		if (t1 > t2) cout << "M\n";
		else if (t1 < t2) cout << "L\n";
		else cout << "T\n";
	}
	return 0;
}