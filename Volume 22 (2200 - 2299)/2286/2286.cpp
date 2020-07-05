#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b, soma, i = 1;
	string s1, s2;
	while (cin >> n && n) {
		cout << "Teste " << i << endl;
		cin >> s1 >> s2;
		while (n--) {
			cin >> a >> b;
			soma = a + b;
			cout << (soma % 2 == 0 ? s1 : s2) << endl;
		}
		cout << endl;
		i++;
	}
	return 0;
}