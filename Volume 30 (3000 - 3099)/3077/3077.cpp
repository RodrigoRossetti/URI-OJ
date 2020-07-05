#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class BIT {
	int n;
	vector<int> bit;

public:

	BIT(vector<int> &arr, int n) {
		this->n = n;
		bit = vector<int>(n+1, 0);
		for (int i = 0; i < n; i++)
			atualiza(i+1, arr[i]);
	}

	void atualiza(int i, int k) {
		for (; i <= n; i += i & (-i))
			bit[i] += k;
	}

	int soma(int i) {
		int total = 0;
		for (; i; i -= i & (-i))
			total += bit[i];
		return total;
	}

	int soma(int l, int r) { return soma(r) - soma(l-1); }

	void imprime() {
		for (int i = 0; i <= n; i++)
			cout << bit[i] << " ";
		cout << endl;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	int completa = k/n, extra = k%n;
	vector<int> v(n);
	for (auto &x : v) cin >> x;
	BIT bit(v, n);
	for (int i = 0 ; i < n; i++) {
		if (i) cout << " ";
		int atual = i+1, total = 0;
		total += bit.soma(1, n)*completa;
		int aux = atual-extra;
		if (aux < 0) {
			total += bit.soma(1, atual);
			total += bit.soma(n-abs(aux)+1, n);
		}
		else total += bit.soma(atual-extra+1, atual);
		cout << total;
	}
	cout << endl;
	return 0;
}