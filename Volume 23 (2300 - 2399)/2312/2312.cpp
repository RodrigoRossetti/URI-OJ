#include <bits/stdc++.h>
using namespace std;

typedef struct {
	string s;
	int ouro, prata, bronze;
} pais;

bool compare (pais a, pais b) {
	return ((a.ouro > b.ouro) || (a.ouro == b.ouro && a.prata > b.prata) ||
	(a.ouro == b.ouro && a.prata == b.prata && a.bronze > b.bronze) ||
	(a.ouro == b.ouro && a.prata == b.prata && a.bronze == b.bronze && a.s < b.s));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b, c;
	string s;
	vector<pais> v;
	pais p;
	cin >> n >> ws;
	while (n--) {
		cin >> s >> a >> b >> c >> ws;
		p.s = s, p.ouro = a, p.prata = b, p.bronze = c;
		v.push_back(p);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].s << " " << v[i].ouro << " " << v[i].prata << " " << v[i].bronze << endl;
	}
	return 0;
}