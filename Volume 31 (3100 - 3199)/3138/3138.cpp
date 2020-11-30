#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ull unsigned long long

ull fat(int k) {
	ull total = 1;
	for (int i = 1; i <= k; i++)
		total *= i;
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, b, soma = 0;
	string s;
	map<string, int> m;
	cin >> n;
	while (n--) {
		cin >> s >> b;
		m[s] += b;
		soma += b;
	}
	ull f1 = fat(soma), f2 = 1;
	for (auto& x : m)
		f2 *= fat(x.second);
	cout << "Feliz aniversario Tobias!\n";
	cout << f1/f2 << endl;
	return 0;
}