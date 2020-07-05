#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b, total = 0;
	cin >> n >> a >> b;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			int k = v[i]+v[j];
			if (k >= a && k <= b) total++;
		}
	}
	cout << total << endl;
	return 0;
}