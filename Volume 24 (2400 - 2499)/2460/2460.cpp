#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, k;
	cin >> n;
	vector<int> v(n);
	vector<bool> out(100002, 1);
	for (int i = 0; i < n; i++) cin >> v[i];
	cin >> m;
	vector<int> v2(m);
	for (int i = 0; i < m; i++) {
		cin >> k;
		out[k] = 0;
	}
	bool flag = 0;
	for (int i = 0; i < n; i++) {
		if (out[v[i]]) {
			if (flag) cout << " ";
			cout << v[i];
			flag = 1;
		}
	}
	cout << endl;
	return 0;
}