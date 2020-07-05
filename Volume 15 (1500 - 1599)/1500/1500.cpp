#include <bits/stdc++.h> 
using namespace std; 

class segmentTree {
	int n, h, espaco_max;
	vector<unsigned long long> st;
	vector<unsigned long long> lazy;
	int meio(int inicio, int fim) { return inicio + (fim - inicio)/2; }

public:

	segmentTree(int n) {
		this->n = n;
		h = (int)(ceil(log2(n)));
		espaco_max = 2*(int)pow(2, h) - 1;
		st = vector<unsigned long long>(espaco_max, 0);
		lazy = vector<unsigned long long>(espaco_max, 0);
	}

	void atualiza(int atualI, int atualF, int inicio, int fim, unsigned long long dif, int indice) {
		if (lazy[indice]) {
			st[indice] += (atualF-atualI+1)*lazy[indice];
			if (atualI != atualF)
				lazy[indice*2+1] += lazy[indice],
				lazy[indice*2+2] += lazy[indice];
			lazy[indice] = 0;
		}
		if (atualI > atualF || atualI > fim || atualF < inicio) return;
		if (atualI >= inicio && atualF <= fim) {
			st[indice] += (atualF-atualI+1)*dif;
			if (atualI != atualF)
				lazy[indice*2+1] += dif,
				lazy[indice*2+2] += dif;
			return;
		}
		int m = meio(atualI, atualF);
		atualiza(atualI, m, inicio, fim, dif, 2*indice+1);
		atualiza(m+1, atualF, inicio, fim, dif, 2*indice+2);
		st[indice] = st[indice*2+1] + st[indice*2+2]; 
	}

	unsigned long long soma(int atualI, int atualF, int inicio, int fim, int indice) {
		if (lazy[indice]) {
			st[indice] += (atualF-atualI+1)*lazy[indice];
			if (atualI != atualF)
				lazy[indice*2+1] += lazy[indice],
				lazy[indice*2+2] += lazy[indice];
			lazy[indice] = 0;
		}
		if (inicio <= atualI && fim >= atualF) return st[indice];
		if (atualF < inicio || atualI > fim) return 0;
		int m = meio(atualI, atualF);
		return soma(atualI, m, inicio, fim, 2*indice+1) + soma(m+1, atualF, inicio, fim, 2*indice+2);
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, c, op, p, q;
	unsigned long long v;
	cin >> t;
	while (t--) {
		cin >> n >> c;
		segmentTree st(n);
		while (c--) {
			cin >> op;
			if (op == 0) {
				cin >> p >> q >> v;
				if (p > q) swap(p, q);
				st.atualiza(0, n-1, p-1, q-1, v, 0);
			}
			else if (op == 1) {
				cin >> p >> q;
				if (p > q) swap(p, q);
				cout << st.soma(0, n-1, p-1, q-1, 0) << endl;
			}
		}
	}
    return 0;  
}