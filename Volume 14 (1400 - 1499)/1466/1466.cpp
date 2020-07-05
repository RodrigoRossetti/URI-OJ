#include <bits/stdc++.h>
using namespace std;

class no {
public:
	int valor;
	no *esquerda, *direita;
};

class BST {
public:

	no *raiz = NULL;

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

	void insere(int k) {
		insere(raiz, k);
	}

	void bfs(no *raiz) {
		queue<no*> q;
		q.push(raiz);
		while (!q.empty()) {
			no *p = q.front();
			q.pop();
			cout << p->valor;
			if (p->esquerda != NULL) q.push(p->esquerda);
			if (p->direita != NULL) q.push(p->direita);
			if (!q.empty()) cout << " ";
		}
		cout << endl;
	}

};

int main() {
	int c, n, k;
	cin >> c;
	for (int i = 1; i <= c; i++) {
		cin >> n;
		BST bst;
		bst.raiz = NULL;
		while (n--) {
			cin >> k;
			bst.insere(k);
		}
		cout << "Case " << i << ":\n";
		bst.bfs(bst.raiz);
		cout << endl;	
	}
	return 0;
}