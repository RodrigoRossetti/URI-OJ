#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long inicio, fim, maior = 0;
	int n, i, f;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	inicio = v[0], fim = v[v.size()-1], i = 1, f = v.size()-2;
	if (inicio == fim) maior = max(maior, inicio);
	while (i <= f) {
		if (inicio >= fim) fim += v[f--];
		if (inicio == fim) maior = max(maior, inicio);
		if (inicio < fim) inicio += v[i++];
		if (inicio == fim) maior = max(maior, inicio);
	}
	cout << maior << endl;
	return 0;
}