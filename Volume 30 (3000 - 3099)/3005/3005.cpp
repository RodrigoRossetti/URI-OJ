#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t1, t2;
	cin >> n;
	while (n--) {
		t1 = t2 = 0;
		vector<int> a(3), b(3);
		for (int i = 0; i < 3; i++) cin >> a[i];
		for (int i = 0; i < 3; i++) cin >> b[i];
		sort(a.rbegin(), a.rend());
		sort(b.rbegin(), b.rend());
		if (a[0] > b[1]) t1++;
		if (a[1] > b[2]) t1++;
		if (b[0] > a[1]) t2++;
		if (b[1] > a[2]) t2++;
		if (t1 == t2 && t1 == 2) cout << 3 << endl;
		else if (t1 == 2) cout << 2 << endl;
		else if (t2 == 2) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}