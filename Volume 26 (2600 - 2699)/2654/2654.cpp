#include <bits/stdc++.h>
using namespace std;

typedef struct candidato {
	int p, k, m;
	string s;
};

bool cmp(candidato a, candidato b) {
	return  (a.p > b.p || (a.p == b.p && a.k > b.k) || (a.p == b.p && a.k == b.k && a.m < b.m) ||
			(a.p == b.p && a.k == b.k && a.m == b.m && a.s < b.s));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n >> ws;
	vector<candidato> v(n);
	for (int i = 0; i < n; i++) cin >> v[i].s >> v[i].p >> v[i].k >> v[i].m >> ws;
	sort(v.begin(), v.end(), cmp);
	cout << v[0].s << endl;
	return 0;
}