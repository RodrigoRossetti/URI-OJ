#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define MAXN 100005
#define ull unsigned long long

ull arr[MAXN];

class BIT {
	ull n;
	vector<ull> bit;

public:

	BIT(ull n) {
		this->n = n;
		bit = vector<ull>(n+1, 0);
		for (ull i = 0; i < n; i++)
			atualiza(i+1, arr[i]);
	}

	void atualiza(ull i, ull k) {
		for (; i <= n; i += i & (-i))
			bit[i] += k;
	}

	ull soma(ull i) {
		ull total = 0;
		for (; i; i -= i & (-i))
			total += bit[i];
		return total;
	}

	ull soma(ull l, ull r) { return soma(r) - soma(l-1); }

};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ull t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		for (ull i = 0; i < n; i++)
			cin >> arr[i];
		sort(arr, arr + n);
		BIT b(n);
		ull exp = 1;
		ull total = 0;
		for (ull i = 0; i < n; i++) {
			ull x = b.soma(i+1, n)*exp;
			ull y = b.soma(i+2, n)*(exp+1);
			if (x < y)
				exp++;
			else
				total += arr[i]*exp;
		}
		cout << total << endl;
	}
	return 0;
}