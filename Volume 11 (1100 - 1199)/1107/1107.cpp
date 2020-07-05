#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, c, x, total;
	vector<int> v;
	while (cin >> a >> c && (a || c)) {
		v.clear();
		while (c--) {
			cin >> x;
			v.push_back(x);
		}
		total = a-v[0];
		for (int i = 1; i < v.size(); i++)
			if (v[i] < v[i-1])
				total += v[i-1]-v[i];
		cout << total << '\n';
	}
	return 0;
}