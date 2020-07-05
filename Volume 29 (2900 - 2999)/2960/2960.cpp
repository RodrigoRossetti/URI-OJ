#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n, c, vogais = 0, consoantes = 0, total;
	string s, atual, nome;
	vector<string> v;
	bool arr[26];
	memset(arr, 0, sizeof(arr));
	cin >> m;
	while (m--) {
		atual = "";
		cin >> n >> ws;
		while(n--) {
			getline(cin, s);
			atual += tolower(s[0]);
		}
		v.push_back(atual);
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].length(); j++) {
			c = v[i][j];
			if (c != ' ' && arr[c-97] == 0) {
				c -= 97;
				arr[c] = 1;
				if (c == 0 || c == 4 || c == 8 || c == 14 || c == 20) vogais++;
				else consoantes++;
			}	
		}
	}
	total = vogais + consoantes;
	for (int i = 0; i < v.size(); i++) nome += toupper(v[i][0]);
	cout << "Nome da Linguagem: " << nome << endl;
	cout << "Lista de Palavras:\n";
	for (int i = 0; i < v.size(); i++) cout << v[i] << endl;
	cout << "Numero de Vogais: " << vogais << endl;
	cout << "Numero de Consoantes: " << consoantes << endl;
	cout << "Numero Total de Letras: " << total << endl;
	if (consoantes == 0) cout << "Linguagem Ruim\n";
	else cout << "Tempo para aprender: " << fixed << setprecision(1) << (double)(total+vogais)/consoantes << " horas" << endl;
	return 0;
}