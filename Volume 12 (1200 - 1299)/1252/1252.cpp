#include <bits/stdc++.h>
using namespace std;

int n, m;

bool comp(int a, int b) {
	int k1 = a%m, k2 = b%m;
	if (k1 < k2) return 1;
	if (k2 < k1) return 0;
	int p1 = a%2, p2 = b%2;
	if (p1 == 0 && p2 != 0) return 0;
	if (p1 != 0 && p2 == 0) return 1;
	if (p1 != 0 && p2 != 0) {
		if (a > b) return 1;
		if (b > a) return 0;
	}
	if (p1 == 0 && p2 == 0) {
		if (a < b) return 1;
		if (b < a) return 0;
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while (cin >> n >> m && (n || m)) {
		cout << n << " " << m << endl;
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end(), comp);
		for (int i = 0; i < n; i++) cout << v[i] << endl;
	}
	cout << "0 0\n";
	return 0;
}