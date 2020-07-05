#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, x, y, v, t1 = 0, t2 = 0;
	cin >> n >> m;
	vector<int> arr(m+1, 0);
	while (n--) {
		cin >> x >> v >> y;
		arr[x] -= v, arr[y] += v, t1 += v;
	}
	for (const auto& w : arr) t2 += abs(w);
	t2 /= 2;
	cout << (t1 == t2 ? "N\n" : "S\n") << t2 << endl;
	return 0;
}