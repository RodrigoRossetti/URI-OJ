#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> &a, pair<string, int> &b) {
	return (a.second > b.second || (a.second == b.second && a.first < b.first));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cout << fixed << setprecision(6);
	while (cin >> n >> ws && n) {
		unordered_map<string, int> mapa;
		int total = 0;
		string final = "";
		while (n--) {
			getline(cin, s);
			final += s;
		}
		for (int i = 1; i < final.length(); i++) {
			mapa[final.substr(i-1, 2)]++;
			total++;
		}
		vector<pair<string, int>> v(mapa.begin(), mapa.end());
		sort(v.begin(), v.end(), comp);
		for (int i = 0, j = 0; i < v.size() && j < 5; i++, j++)
			cout << v[i].first << " " << v[i].second << " " << (double)v[i].second/total << endl;
		cout << endl;
	}
	return 0;
}