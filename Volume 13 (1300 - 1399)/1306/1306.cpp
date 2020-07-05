#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int r, n, t = 1;
	while (cin >> r >> n && (r || n)) {
		int total = 0;
		while (total <= 27 && r-n*total > 0) total++;
		cout << "Case " << t++ << ": ";
		if (total == 28) cout << "impossible\n";
		else cout << total-1 << endl;
	}
	return 0;
}