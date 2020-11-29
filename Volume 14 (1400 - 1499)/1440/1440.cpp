#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		int x = 0, q = 0, e = 0, total = 0, maior = 0;
		vector<pair<string, string>> v(n);
		for (auto& k : v) {
			cin >> k.first >> k.second;
			if (k.second == "E") e++;
			else if (k.second == "X") x++;
			else q++;
		}
		if (e > x) q -= (e-x);
		sort(v.begin(), v.end());
		for (auto& k : v) {
			if (k.second == "E") total++;
			else if (k.second == "X") total--;
			else if (q) {
				total++;
				if (x > e) e++, q--;
				else q -= 2;
			}
			else total--;
			maior = max(maior, total);
		}
		cout << maior << endl;
	}
	return 0;
}