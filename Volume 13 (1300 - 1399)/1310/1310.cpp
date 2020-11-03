#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int kadane(vector<int>& v) {
	int n = v.size();
	int maior = v[0], atual = v[0];
	for (int i = 1; i < n; i++) {
		atual = max(v[i], atual + v[i]);
		maior = max(maior, atual);
   	}
	return max(0, maior);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	while (cin >> n) {
		cin >> k;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			v[i] -= k;
		}
		cout << kadane(v) << endl;
	}
	return 0;
}