#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		vector<int> v(n);
		bool flag = 1;
		for (int i = 0; i < n; i++) cin >> v[i];
		for (int i = 1; i <= n; i++) {
			if (distance(v.begin(), find(v.begin(), v.end(), i))+1 != v[i-1]) {
				flag = 0;
				break;
			}
		}
		cout << (flag ? "ambiguous\n" : "not ambiguous\n");
	}
	return 0;
}