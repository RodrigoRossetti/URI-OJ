#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ALFABETO 26

class TRIE {

	class no {
	public:
		vector<no*> filhos = vector<no*>(ALFABETO, NULL);
		bool fim = 0;
		int qtd = 0;
	};

	no *raiz = new no;

public:

	void insere(string s) {
		no *p = raiz;
		for (int i = 0; i < s.length(); i++) {
			if (p->filhos[s[i]-'a'] == NULL)
				p->filhos[s[i]-'a'] = new no;
			p->qtd++;
			p = p->filhos[s[i]-'a']; 
		}
		p->fim = 1;
	}

	int busca(no *raiz, string s) {
		no *p = raiz;
		for (int i = 0; i < s.length(); i++) {
			if (p->filhos[s[i]-'a'] == NULL)
				return 0;
			p = p->filhos[s[i]-'a'];
		}
		if (p == NULL) return 0;
		else return p->qtd;
	}

	int busca(string s) {
		return busca(raiz, s);
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string a, b;
	TRIE t;
	cin >> n >> ws;
	while (n--) {
		cin >> a >> b;
		if (a == "add") t.insere(b);
		else cout << t.busca(b) << endl;
	}
	return 0;
}