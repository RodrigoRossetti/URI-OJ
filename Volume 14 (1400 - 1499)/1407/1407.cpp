#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, c, k, x;
	while (cin >> n >> c >> k && (n || c || k)) {
		vector<int>v(k, 0);
		while (n--) {
			for (int i = 0; i < c; i++) {
				cin >> x;
				v[x-1]++;
			}
		}
		bool flag = 0;
		int menor = *min_element(v.begin(), v.end());
		for (int i = 0; i < k; i++) {
			if (v[i] == menor) {
				if (flag) cout << " ";
				cout << i+1;
				flag = 1;
			}
		}
		cout << endl;
	}
	return 0;
}