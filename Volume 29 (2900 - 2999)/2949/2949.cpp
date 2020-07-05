#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, hobbit = 0, humano = 0, elfo = 0, anao = 0, mago = 0;
	string s;
	char c;
	cin >> n;
	while (n--) {
		cin >> s >> c;
		switch(c) {
			case 'H': humano++; break;
			case 'M': mago++; break;
			case 'E': elfo++; break;
			case 'X': hobbit++; break;
			case 'A': anao++; break;
		}
	}
	cout << hobbit << " Hobbit(s)\n" << humano << " Humano(s)\n" << elfo << " Elfo(s)\n" << anao << " Anao(s)\n" << mago << " Mago(s)\n";
	return 0;
}