#include <bits/stdc++.h>
using namespace std;

class BIT {
	int n;
	vector<int> bit;

public:

	BIT(int n) {
		this->n = n;
		bit = vector<int>(n+1, 0);
	}

	int inversoes(vector<int> arr) {
		vector<int> aux = arr;
		sort(aux.begin(), aux.end());
		for (int i = 0; i < n; i++)
			arr[i] = lower_bound(aux.begin(), aux.end(), arr[i])-aux.begin()+1;
		int total = 0;
		for (int i = n-1; i >= 0; i--) {
			total += soma(arr[i]);
			atualiza(arr[i], 1);
		}
		return total;
	}

	void atualiza(int i, int k) {
		for (; i <= n; i += i & (-i))
			bit[i] += k;
	}

	long long soma(int i) {
		long long total = 0;
		for (; i; i -= i & (-i))
			total += bit[i];
		return total;
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		BIT bit(n);
		cout << (bit.inversoes(v) % 2 == 0 ? "Carlos\n" : "Marcelo\n");
	}
	return 0;
}