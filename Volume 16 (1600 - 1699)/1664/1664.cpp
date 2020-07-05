#include <bits/stdc++.h>
using namespace std;

int main() {
	char c;
	string s;
	int palavras = 0, jogos = 0, atual = 0;
	unordered_map<string, int> mapa;
	while (cin >> s) {
		for (int i = 0; i < s.length(); i++)
			if (!isalpha(s[i])) s[i] = ' ';
		stringstream ss(s);
		while (ss >>  s) {
			if (s == "BULLSHIT") {
				mapa.clear();
				jogos++;
				palavras += atual;
				atual = 0;
			}
			else {
				for (int i = 0; i < s.length(); i++)
					s[i] = toupper(s[i]);
				if (mapa[s] == 0) atual++, mapa[s]++;
			}
		}
	}
	int gcd = __gcd(palavras, jogos);
	cout << palavras/gcd << " / " << jogos/gcd << endl;
	return 0;
}