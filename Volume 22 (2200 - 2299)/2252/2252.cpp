#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<double, int> a, pair<double, int> b) {
	return (a.first > b.first || (a.first == b.first && a.second < b.second));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t = 1;
	double k;
	while (cin >> n) {
		vector<pair<double, int>> v(10);
		for (int i = 0; i < 10; i++) {
			cin >> k;
			v[i] = {k, i};
		}
		sort(v.begin(), v.end(), cmp);
		int j = 0;
		cout << "Caso " << t++ << ": ";
		while (n--) cout << v[j++].second;
		cout << endl;
	}
	return 0;
}