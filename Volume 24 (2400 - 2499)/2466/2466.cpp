#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	for (int i = 0; i < n; i++) {
		vector<int> aux(n-i-1);
		for (int j = 1; j < n-i; j++)
			aux[j-1] = (v[j-1] == v[j] ? 1 : -1);
		v = aux;
	}
	cout << (v[0] == -1 ? "branca\n" : "preta\n");
	return 0;
}