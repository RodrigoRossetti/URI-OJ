#include <bits/stdc++.h>
using namespace std;

typedef struct {
	string nome, cor;
	char tamanho;
} pessoa;

bool comp(pessoa a, pessoa b) {
	return (a.cor < b.cor ||
	(a.cor == b.cor && a.tamanho != b.tamanho && (a.tamanho == 'P' || (a.tamanho == 'M' && b.tamanho != 'P')))
	|| (a.cor == b.cor && a.tamanho == b.tamanho && a.nome < b.nome));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	bool flag = 0;
	int n;
	string s;
	char c;
	vector<pessoa> v;
	while (cin >> n >> ws && n) {
		v.clear();
		for (int i = 0; i < n; i++) {
			pessoa p;
			getline(cin, s);
			p.nome = s;
			cin >> s >> c >> ws;
			p.cor = s, p.tamanho = c;
			v.push_back(p);
		}
		sort(v.begin(), v.end(), comp);
		if (flag) cout << endl;
		for (int i = 0; i < n; i++)
			cout << v[i].cor << " " << v[i].tamanho << " " << v[i].nome << endl;
		flag = 1;
	} 
	return 0;
}