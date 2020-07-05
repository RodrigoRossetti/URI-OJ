#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
	return (p1.first < p2.first || (p1.first == p2.first && p1.second > p2.second));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 0;
	string s;
	while (getline(cin, s)) {
		if (t) cout << endl;
		vector<pair<int, int>> v;
		for (int i = 0; i < 129; i++)
			v.push_back({0, i});
		for (int i = 0; i < s.length(); i++)
			v[s[i]].first++;
		sort(v.begin(), v.end(), comp);
		for (int i = 0; i < 129; i++)
			if (v[i].first) cout << v[i].second << " " << v[i].first << endl;
		t++;
	}
	return 0;
}