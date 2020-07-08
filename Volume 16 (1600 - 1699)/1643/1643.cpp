#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> fib = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610,
						987, 1597, 2584, 4181, 6765, 10946, 17711};
	bitset<21> bit;
	int t, x;
	cin >> t;
	while (t--) {
		bit.reset();
		cin >> x;
		int i = 20;
		while (x != 0) {
			if (x >= fib[i]) x -= fib[i], bit[i] = 1;
			i--;
		}
		bit >>= 1;
		int total = 0;
		for (int j = 0; j < 21; j++)
			if (bit[j]) total += fib[j];
		cout << total << endl;
	}
	return 0;
}