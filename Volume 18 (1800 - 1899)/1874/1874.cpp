#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int h, p, f, k;
	while (cin >> h >> p >> f && (h || p || f)) {
		vector<vector<int>> v(p);
		int maior;
		bool flag = 1;
		for (int i = h; i > 0; i--) {
			for (int j = 0; j < p; j++) {
				cin >> k;
				if (k) {
					if (flag) {
						flag = 0;
						maior = i;
					}
					v[j].push_back(k);
				}
			}
		}
		queue<int> q;
		for (int i = 0; i < f; i++) {
			cin >> k;
			q.push(k);
		}
		for (int i = p-1; i >= 0; i--) {
			while (v[i].size() != maior && !q.empty()) {
				v[i].push_back(q.front());
				q.pop();
			}
			if (q.empty()) break;
		}
		for (int i = h-1; i >= 0; i--) {
			for (int j = 0; j < p; j++) {
				if (j) cout << " ";
				if (v[j].size() <= i) cout << 0;
				else cout << v[j][i];
			}
			cout << endl;
		}
	}
	return 0;
}