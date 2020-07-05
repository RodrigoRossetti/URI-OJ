#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s = "", aux = "";
	while (getline(cin, aux)) {
		if (aux[0] == '#') cout << aux << endl;
		else s += aux;
	}
	aux = "";
	int tab = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '{') {
			for (int i = 0; i < tab; i++) cout << '.';
			cout << aux << endl;
			aux = "";
			for (int i = 0; i < tab; i++) cout << '.';
			tab += 4;
			cout << "{\n";
		}
		else if (s[i] == '}') {
			tab -= 4;
			for (int i = 0; i < tab; i++) cout << '.';
			cout << "}\n";
		}
		else if (s[i] == ';' && (aux[0] != 'f' || aux[1] != 'o' || aux[2] != 'r')) {
			aux += ';';
			for (int i = 0; i < tab; i++) cout << '.';
			cout << aux << endl;
			aux = "";
		}
		else aux += s[i];
	}
	return 0;
}