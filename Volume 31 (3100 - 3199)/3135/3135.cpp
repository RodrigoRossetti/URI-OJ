#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total = 0;
	string s;
	cin >> n >> ws;
	vector<vector<string>> v(20);
	vector<int> ind(20, 0);
	for (int i = 0; i < n; i++) {
		cin >> s;
		v[s.length()].push_back(s);
	}
	while (total != n) {
		bool flag = 0;
		for (int i = 0; i < 20; i++) {
			if (ind[i] < v[i].size()) {
				if (flag) cout << ", ";
				cout << v[i][ind[i]++];
				total++;
				flag = 1;
			}
			if (i == 19) cout << endl;
		}
	}
	return 0;
}