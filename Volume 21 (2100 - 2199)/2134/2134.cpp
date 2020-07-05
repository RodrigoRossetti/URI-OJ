#include <bits/stdc++.h>
using namespace std;

typedef struct aluno {
	int prob;
	string nome;
};

bool cmp (aluno a, aluno b) {
	return (a.prob > b.prob || (a.prob == b.prob && a.nome < b.nome));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t = 1;
	while (cin >> n >> ws) {
		vector<aluno> v(n);
		for (int i = 0; i < n; i++) cin >> v[i].nome >> v[i].prob >> ws;
		sort(v.rbegin(), v.rend(), cmp);
		cout << "Instancia " << t++ << endl << v[0].nome << endl << endl;
	}
	return 0;
}