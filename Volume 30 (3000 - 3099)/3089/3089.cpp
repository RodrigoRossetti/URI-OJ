#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		vector<int> v(2*n);
		for (int i = 0; i < 2*n; i++) cin >> v[i];
		int maior = INT_MIN, menor = INT_MAX;
		for (int i = 0; i < n; i++) {
			int atual = v[i]+v[2*n-i-1];
			maior = max(maior, atual);
			menor = min(menor, atual);
		}
		cout << maior << " " << menor << endl;
	}
	return 0;
}