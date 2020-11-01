#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct info {
	int h, m, t;
	string n;
	info(int h, int m, int t, string n) { this->h = h, this->m = m, this->t = t, this->n = n; }
};

bool comp(info a, info b) {
	return (a.h > b.h || (a.h == b.h && a.m < b.m) || (a.h == b.h && a.m == b.m && a.t < b.t));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, q, h, m, i = 0;
	cin >> p >> q;
	string s, n;
	vector<info> v;
	while (q--) {
		cin >> s >> n;
		h = stoi(s.substr(0, 2));
		m = stoi(s.substr(3 ,2));
		if ((h == 23 && 60-p <= m) || (h == 0 && p >= m))
			v.push_back(info(h, m, i++, n));
	}
	sort(v.begin(), v.end(), comp);
	for (int i = 0; i < v.size(); i++)
		cout << v[i].n << endl;
	return 0;
}