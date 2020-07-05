#include <bits/stdc++.h>
using namespace std;

class BST {

	class no {
	public:
		int valor;
		no *esquerda = NULL, *direita = NULL;
		no(int k) { valor = k; }
	};

public:

	no *raiz;

	no* insere(no *raiz, int k) {
		if (this->raiz == NULL) this->raiz = new no(k);
		else if (raiz == NULL) return new no(k);
		else if (k < raiz->valor) raiz->esquerda = insere(raiz->esquerda, k);
		else if (k > raiz->valor) raiz->direita = insere(raiz->direita, k);
    	return raiz;
	}

	void insere(int k) {
		insere(raiz, k);
	}

	bool busca(no *raiz, int k) {
		if (raiz == NULL) return 0;
		if (raiz->valor == k) return 1;
		if (k < raiz->valor) return busca(raiz->esquerda, k);
		return busca(raiz->direita, k);
	}

	bool busca(int k) {
		return busca(raiz, k);
	}

	no* antecessor(no *raiz) {
		no *atual = raiz;
		while (atual && atual->direita != NULL)
			atual = atual->direita;
		return atual;
	}

	no* remove(no *raiz, int k) {
		if (raiz == NULL) return raiz;
		if (k < raiz->valor) raiz->esquerda = remove(raiz->esquerda, k);
		else if (k > raiz->valor) raiz->direita = remove(raiz->direita, k);
		else {
			if (raiz->esquerda == NULL) {
				no *filho = raiz->direita;
				free(raiz);
				return filho;
			}
			else if (raiz->direita == NULL) {
				no *filho = raiz->esquerda;
				free(raiz);
				return filho;
			}
			no *p = antecessor(raiz->esquerda);
			raiz->valor = p->valor;
			raiz->esquerda = remove(raiz->esquerda, p->valor);
		}
		return raiz;
	}

	void remove(int k) {
		raiz = remove(raiz, k);
	}

	void emOrdem(no *raiz, int nivel = 0) {
		if (raiz != NULL) {
			emOrdem(raiz->esquerda, nivel+1);
			if (nivel && raiz->valor > this->raiz->valor) cout << " ";
			cout << raiz->valor;
			if (nivel && raiz->valor < this->raiz->valor) cout << " ";
			emOrdem(raiz->direita, nivel+1);
		}
	}

	void emOrdem() {
		emOrdem(raiz);
	}

	void preOrdem(no *raiz, int nivel = 0) {
		if (raiz != NULL) {
			if (nivel) cout << " ";
			cout << raiz->valor;
			preOrdem(raiz->esquerda, nivel+1);
			preOrdem(raiz->direita, nivel+1);
		}
	}

	void preOrdem() {
		preOrdem(raiz);
	}

	void posOrdem(no *raiz, int nivel = 0) {
		if (raiz != NULL) {
			posOrdem(raiz->esquerda, nivel+1);
			posOrdem(raiz->direita, nivel+1);
			cout << raiz->valor;
			if (nivel) cout << " ";
		}
	}

	void posOrdem() {
		posOrdem(raiz);
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	BST bst;
	bst.raiz = NULL;
	while (cin >> s) {
		if (s == "I") {
			cin >> n;
			bst.insere(n);
		}
		else if (s == "P") {
			cin >> n;
			cout << n << " " << (bst.busca(n) ? "existe\n" : "nao existe\n");
		}
		else if (s == "R") {
			cin >> n;
			bst.remove(n);
		}
		else if (s == "PREFIXA") {
			bst.preOrdem();
			cout << endl;
		}
		else if (s == "INFIXA") {
			bst.emOrdem();
			cout << endl;
		}
		else if (s == "POSFIXA") {
			bst.posOrdem();
			cout << endl;
		}
	}
	return 0;
}