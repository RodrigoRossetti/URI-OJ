#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while(cin >> n >> ws) {
		int total = 0;
		string especie, raca, nome, lixo, aux;
		while (n--) {
			getline(cin, especie);
			getline(cin, raca);
			getline(cin, nome);
			getline(cin, lixo);
			stringstream ss(nome);
			char c = raca[0];
			if (especie == "cachorro") {
				int i = 0;
				while (ss >> aux) {
					if ((nome[0] == c || aux[0] == c) && i) {
						total++;
						break;
					}
					i++;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}