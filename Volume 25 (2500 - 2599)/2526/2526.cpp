#include <bits/stdc++.h>
using namespace std;

class BIT {
	long long n;
	vector<long long> bit;

public:
	BIT(long long n) {
		this->n = n;
		bit = vector<long long>(n+1, 0);
	}

	long long constroi_inversoes_triplas(vector<long long> arr) {
		vector<long long> aux = arr;
		sort(aux.begin(), aux.end());
		for (long long i = 0; i < n; i++) {
			arr[i] = lower_bound(aux.begin(), aux.end(), arr[i])-aux.begin()+1;
		}
		vector<long long> maior(n, 0), menor(n, 0);
		for (long long i = n-1; i >= 0; i--) {
			menor[i] = soma(arr[i]-1);
			atualiza(arr[i], 1);
		}
		for (long long i = 0; i <= n; i++) bit[i] = 0;
		for (long long i = 0; i < n; i++) {
			maior[i] = i-soma(arr[i]);
			atualiza(arr[i], 1);
		}
		long long total = 0;
		for (long long i = 0; i < n; i++)
			total += menor[i]*maior[i];
		return total;
	}

	long long soma(long long i) {
		long long total = 0;
		while (i > 0) {
			total += bit[i];
			i -= i & (-i);
		}
		return total;
	}

	void atualiza(long long i, long long k) {
		while (i <= n) {
			bit[i] += k;
			i += i & (-i);
		}
	}

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n;
	while (cin >> n) {
		vector<long long> v(n);
		for (long long i = 0; i < n; i++) cin >> v[i];
		BIT bit(n);
		cout << bit.constroi_inversoes_triplas(v) << endl;
	}
	return 0;
}