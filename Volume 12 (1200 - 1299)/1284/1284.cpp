#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ALFABETO 26

class TRIE {

	class no {
	public:
		vector<no*> filhos = vector<no*>(ALFABETO, NULL);
		int fim = 0;
	};

public:

	no *raiz = new no;

	void insere(string s) {
		no *p = raiz;
		for (int i = 0; i < s.length(); i++) {
			if (p->filhos[s[i]-'a'] == NULL)
				p->filhos[s[i]-'a'] = new no;
			p = p->filhos[s[i]-'a']; 
		}
		p->fim++;
	}

	void dfs(no *raiz, long long &total, long long atual) {
		long long intersecta = 0;
		no *p = raiz;
		for (int i = 0; i < ALFABETO; i++) {
			if (p->filhos[i] != NULL) intersecta++;
			if (intersecta == 2) break;
		}
		if (raiz->fim) total += atual*raiz->fim;
		if (intersecta == 1 && raiz->fim) atual++;
		for (int i = 0; i < ALFABETO; i++) {
			if (p->filhos[i] != NULL) {
				if (intersecta >= 2) dfs(p->filhos[i], total, atual+1);
				else dfs(p->filhos[i], total, atual);
			}
		}
	}

	long long dfs() {
		long long total = 0;
		for (int i = 0; i < ALFABETO; i++) {
			if (raiz->filhos[i] != NULL)
				dfs(raiz->filhos[i], total, 1);
		}
		return total;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cout << fixed << setprecision(2);
	while (cin >> n) {
		TRIE trie;
		for (int i = 0; i < n; i++) {
			cin >> s;
			trie.insere(s);
		}
		cout << (double)trie.dfs()/n << endl;
	}
	return 0;
}