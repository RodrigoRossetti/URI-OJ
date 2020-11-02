#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int solve(vector<int>& v) {
	int n = v.size(), l = 0, r = n-2;
	deque<int> d;
	d.push_back(v[n-1]);
	bool flag = 1;
	while (l <= r) {
		if (flag) {
			d.push_back(v[l++]);
			if (l <= r) d.push_front(v[l++]);
			flag = 0;
		}
		else {
			d.push_back(v[r--]);
			if (l <= r) d.push_front(v[r--]);
			flag = 1;
		}
	}
	int soma = 0;
	for (int i = 1; i < d.size(); i++)
		soma += abs(d[i-1]-d[i]);
	return soma;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n;
	cin >> t;
	for (int caso = 1; caso <= t; caso++) {
		cin >> n;
		vector<int> v(n), v2(n);
		for (auto& x : v) cin >> x;
		sort(v.begin(), v.end());
		v2 = v;
		reverse(v.begin(), v.end());
		cout << "Case " << caso << ": " << max(solve(v), solve(v2)) << endl;
	}
	return 0;
}