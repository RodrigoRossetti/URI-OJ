#include <bits/stdc++.h>
using namespace std;

#define ALFABETO 26

class TRIE {

	class no {
	public:
		vector<no*> filhos = vector<no*>(ALFABETO, NULL);
		bool fim = 0;
	};

public:

	no *raiz = new no;

	bool insere(string s) {
		no *p = raiz;
		bool flag = 1;
		for (int i = 0; i < s.length(); i++) {
			if (p->fim) return 0;
			if (p->filhos[s[i]-'a'] == NULL)
				p->filhos[s[i]-'a'] = new no;
			else if (i == s.length()-1) return 0;
			p = p->filhos[s[i]-'a']; 
		}
		p->fim = 1;
		return 1;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	while (cin >> n && n) {
		TRIE trie;
		bool flag = 1;
		while (n--) {
			cin >> s;
			if (flag) flag = trie.insere(s);
		}
		cout << (flag ? "Conjunto Bom\n" : "Conjunto Ruim\n");
	}
	return 0;
}