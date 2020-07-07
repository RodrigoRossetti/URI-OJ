#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct aluno {
	string a;
	char s;
	int c;
};

bool comp(aluno &n, aluno &m) {
	return (n.c < m.c || (n.c == m.c && n.s < m.s) || (n.c == m.c && n.s == m.s && n.a < m.a));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	while (cin >> q) {
		vector<aluno> v(q);
		for (int i = 0; i < q; i++) cin >> v[i].a >> v[i].s >> v[i].c;
		sort(v.begin(), v.end(), comp);
		for (auto &k : v) cout << k.a << endl;
	}
	return 0;
}