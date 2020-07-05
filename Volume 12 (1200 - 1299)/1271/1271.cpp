#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, r, q, a, b, k = 1;
	vector<int> v;
	while (cin >> n && n) {
		cin >> r;
		v.clear();
		for (int i = 1; i <= n; i++)
			v.push_back(i);
		while (r--) {
			cin >> a >> b;
			reverse(v.begin()+a-1, v.begin()+b);
		}
		cout << "Genome " << k << endl;
		cin >> q;
		while (q--) {
			cin >> a;
			cout << find(v.begin(), v.end(), a) - v.begin() + 1 << endl;
		}
		k++;
	}
	return 0;
}