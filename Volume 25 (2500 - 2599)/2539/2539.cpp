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

	long long constroiInversoes(vector<long long> arr) {
		vector<long long> aux = arr;
		sort(aux.begin(), aux.end());
		for (long long i = 0; i < n; i++)
			arr[i] = lower_bound(aux.begin(), aux.end(), arr[i])-aux.begin()+1;
		long long total = 0;
		for (long long i = 0; i < n; i++) {
			total += soma(arr[i]-1);
			atualiza(arr[i], 1);
		}
		return total;
	}

	void atualiza(long long i, long long k) {
		i++;
		while (i <= n) {
			bit[i] += k;
			i += i & (-i);
		}
	}

	long long soma(long long i) {
		long long total = 0;
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
	long long n;
	while (cin >> n) {
		vector<long long> v(n);
		for (long long i = 0; i < n; i++)
			cin >> v[i];
		BIT bit(n);
		cout << bit.constroiInversoes(v) << endl;
	}
	return 0;
}