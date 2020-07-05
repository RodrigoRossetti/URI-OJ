#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t;
	char c;
	string s;
	while (cin >> n && n) {
		int total = 0;
		vector<pair<bool, int>> v(26, make_pair(0, 0));
		while (n--) {
			cin >> c >> t >> s;
			if (s == "correct") v[c-'A'].first = 1, v[c-'A'].second += t, total++;
			else v[c-'A'].second += 20;
		}
		cout << total << " ";
		total = 0;
		for (auto &k : v)
			if (k.first) total += k.second;
		cout << total << endl;
	}
	return 0;
}