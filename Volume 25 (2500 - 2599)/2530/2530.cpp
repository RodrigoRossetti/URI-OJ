#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	while (cin >> n >> m) {
		vector<int> s(n), r(m);
		for (auto& x : s) cin >> x;
		for (auto& x : r) cin >> x;
		int pos = 0;
		for (int i = 0; i < n; i++)
			if (s[i] == r[pos] && pos < m)
				pos++;
		cout << (pos == m ? "sim" : "nao") << endl;
	}
	return 0;
}