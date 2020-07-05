#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b) {
	return a.second > b.second;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	while (cin >> n && n) {
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> k;
			v[i] = make_pair(k, 0);
		}
		cin >> k;
		int total;
		for (int i = 0; k; i++) {
			if (i == 0) total = 0;
			//cout << i << " " << total << endl;
			if (i >= v.size()) {
				i -= v.size();
				if (total == 0) break;
				total = 0;
			}
			if (v[i].first) {
				v[i].first--, v[i].second++, k--; 
				total++;
			}
		}
		//cout << k << endl;
		if (total == 0) cout << "Impossible\n";
		else {
			sort(v.begin(), v.end(), comp);
			for (int i = 0; i < v.size(); i++) cout << v[i].second << endl;
		}
		//for (int i = 0; i < v.size(); i++) cout << v[i].second << endl;
	}
	return 0;
}