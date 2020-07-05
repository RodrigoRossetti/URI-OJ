#include <bits/stdc++.h>
using namespace std;

class no {
public:
	int valor;
	no *esquerda, *direita;
};

class BST {
public:

	no *raiz;

	no* criaNo(int k) {
		no *p = new no;
		p->valor = k;
		p->esquerda = p->direita = NULL;
		return p;
	}

	no* insere(no *raiz, int k) {
		if (this->raiz == NULL) this->raiz = criaNo(k);
		else if (raiz == NULL) return criaNo(k);
		else if (k < raiz->valor) raiz->esquerda = insere(raiz->esquerda, k);
		else if (k > raiz->valor) raiz->direita = insere(raiz->direita, k);
    	return raiz;
	}

	bool busca(no *raiz, int k) {
		if (raiz == NULL) return 0;
		if (raiz->valor == k) return 1;
		if (k < raiz->valor) return busca(raiz->esquerda, k);
		return busca(raiz->direita, k);
	}

	void emOrdem(no *raiz, int nivel) {
		if (raiz != NULL) {
			emOrdem(raiz->esquerda, nivel+1);
			if (nivel && raiz->valor > this->raiz->valor) cout << " ";
			cout << (char)raiz->valor;
			if (nivel && raiz->valor < this->raiz->valor) cout << " ";
			emOrdem(raiz->direita, nivel+1);
		}
	}

	void preOrdem(no *raiz, int nivel) {
		if (raiz != NULL) {
			if (nivel) cout << " ";
			cout << (char)raiz->valor;
			preOrdem(raiz->esquerda, nivel+1);
			preOrdem(raiz->direita, nivel+1);
		}
	}

	void posOrdem(no *raiz, int nivel) {
		if (raiz != NULL) {
			posOrdem(raiz->esquerda, nivel+1);
			posOrdem(raiz->direita, nivel+1);
			cout << (char)raiz->valor;
			if (nivel) cout << " ";
		}
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char n;
	string s;
	BST bst;
	bst.raiz = NULL;
	while (cin >> s) {
		if (s == "I") {
			cin >> n;
			bst.insere(bst.raiz, n);
		}
		else if (s == "P") {
			cin >> n;
			cout << n << " " << (bst.busca(bst.raiz, n) ? "existe\n" : "nao existe\n");
		}
		else if (s == "PREFIXA") {
			bst.preOrdem(bst.raiz, 0);
			cout << endl;
		}
		else if (s == "INFIXA") {
			bst.emOrdem(bst.raiz, 0);
			cout << endl;
		}
		else if (s == "POSFIXA") {
			bst.posOrdem(bst.raiz, 0);
			cout << endl;
		}
	}
	return 0;
}