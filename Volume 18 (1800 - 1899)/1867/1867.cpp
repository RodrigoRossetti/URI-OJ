#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b;
	while (cin >> a >> b && (a != "0" || b != "0")) {
		while (a.length() > 1) {
			int soma = 0;
			for (int i = 0; i < a.length(); i++) soma += a[i]-'0';
			a = to_string(soma);
		}
		while (b.length() > 1) {
			int soma = 0;
			for (int i = 0; i < b.length(); i++) soma += b[i]-'0';
			b = to_string(soma);
		}
		int x = stoi(a), y = stoi(b);
		if (a > b) cout << 1;
		else if (b > a) cout << 2;
		else cout << 0;
		cout << endl;
	}
	return 0;
}