#include "bits/stdc++.h" 
using namespace std; 

#define endl '\n'

bool comp(const string &a, const string &b) {
	return (a.length() > b.length());
}

class PalindromicTree {

	class no {
	public:
		int inicio, fim, length, suffixEdge;
		vector<int> insertEdge = vector<int>(26, 0);
		no() { }
		no (int length, int suffixEdge) { this->length = length, this->suffixEdge = suffixEdge; }
	};

public:

	no raiz1 = no(-1, 1), raiz2 = no(0, 1);
	vector<no> tree;
	int noAtual = 1;
	int pos = 2;
	string s;

	PalindromicTree(string s) {
		tree = vector<no>(s.length()+3);
		tree[1] = raiz1, tree[2] = raiz2;
		this->s = s;
		for (int i = 0; i < s.length(); i++)
			insere(i);
	}

	void buscaX(int idx, int &atual) {
		for (; idx-tree[atual].length < 1 || s[idx] != s[idx-tree[atual].length-1];
			   atual = tree[atual].suffixEdge);
	}

	void insere(int idx) {
		int aux = noAtual;
		buscaX(idx, aux);
		
		if (tree[aux].insertEdge[s[idx]-'a'] != 0) {
			noAtual = tree[aux].insertEdge[s[idx]-'a'];
			return;
		}

		pos++;
		tree[aux].insertEdge[s[idx]-'a'] = pos;
		tree[pos].length = tree[aux].length + 2;
		tree[pos].fim = idx;
		tree[pos].inicio = idx - tree[pos].length + 1;

		aux = tree[aux].suffixEdge;
		noAtual = pos;

		if (tree[noAtual].length == 1) {
			tree[noAtual].suffixEdge = 2;
			return;
		}

		buscaX(idx, aux);
		tree[noAtual].suffixEdge = tree[aux].insertEdge[s[idx]-'a'];
	}

	vector<string> palSubstr() {
		//imprime();
		vector<string> pal;
		for (int i = 3; i <= pos; i++) {
			string aux = "";
			for (int j = tree[i].inicio; j <= tree[i].fim; j++) aux += s[j];
			pal.push_back(aux);
		}
		return pal;
	}

	void imprime() {
		for (int i = 3; i <= pos; i++) {
			for (int j = tree[i].inicio; j <= tree[i].fim; j++)
				cout << s[j];
			cout << endl;
		}
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	while (cin >> n) {
		int menor = INT_MAX, menorPos = 0;
		vector<vector<string>> v(n);
		for (int i = 0; i < n; i++) {
			cin >> s;
			v[i] = PalindromicTree(s).palSubstr();
			if (v[i].size() < menor) menor = v[i].size(), menorPos = i;
		}
		sort(v[menorPos].begin(), v[menorPos].end(), comp);
		bool nenhum = 1;
		for (int i = 0; i < v[menorPos].size(); i++) {
			bool flag = 1;
			for (int j = 0; j < n; j++) {
				if (j != menorPos) {
					if (find(v[j].begin(), v[j].end(), v[menorPos][i]) == v[j].end()) {
						flag = 0;
						break;
					}
				}
			}
			if (flag) {
				nenhum = 0;
				cout << v[menorPos][i].length() << endl;
				break;
			}
		}
		if (nenhum) cout << "0\n";
	}
	return 0;
}