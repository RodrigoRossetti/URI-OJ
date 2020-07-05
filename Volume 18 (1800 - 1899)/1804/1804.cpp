#include <bits/stdc++.h>
using namespace std;

class BIT {
	int n;
	vector<int> bit;

public:

	BIT(vector<int> arr, int n) {
		this->n = n;
		bit = vector<int>(n+1, 0);
		for (int i = 0; i < n; i++)
			atualiza(i, arr[i]);
	}

	void atualiza(int i, int k) {
		i++;
		while (i <= n) {
			bit[i] += k;
			i += i & (-i);
		}
	}

	int soma(int i) {
		int total = 0;
		i++;
		while (i > 0) {
			total += bit[i];
			i -= i & (-i);
		}
		return total;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	char c;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	BIT bit(v, n);
	while (cin >> c >> k) {
		if (c == 'a') bit.atualiza(k-1, -v[k-1]);
		else if (c == '?') cout << bit.soma(k-2) << endl;
	}
	return 0;
}