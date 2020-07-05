#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unordered_map<string, long long> m = { {"zero", 0}, {"um", 1}, {"dois", 2}, {"tres", 3}, {"quatro", 4},
		{"cinco", 5}, {"seis", 6}, {"sete", 7}, {"oito", 8}, {"nove", 9}, {"dez", 10}, {"onze", 11},
		{"doze", 12}, {"treze", 13}, {"quatorze", 14}, {"quinze", 15}, {"dezesseis", 16}, {"dezessete", 17},
		{"dezoito", 18}, {"dezenove", 19}, {"vinte", 20}, {"trinta", 30}, {"quarenta", 40}, {"cinquenta", 50},
		{"sessenta", 60}, {"setenta", 70}, {"oitenta", 80}, {"noventa", 90}, {"cem", 100}, {"cento", 100},
		{"duzentos", 200}, {"trezentos", 300}, {"quatrocentos", 400}, {"quinhentos", 500}, {"seiscentos", 600},
		{"setecentos", 700}, {"oitocentos", 800}, {"novecentos", 900}, {"mil", 1e3}, {"milhao", 1e6},
		{"milhoes", 1e6}, {"bilhao", 1e9}, {"bilhoes", 1e9}, {"trilhao", 1e12}, {"trilhoes", 1e12} };
	string s;
	while (getline(cin, s)) {
		long long atual = 0, total = 0;
		stringstream ss(s);
		while (ss >> s) {
			if (m[s] > 900) total += max(1LL, atual)*m[s], atual = 0;
			else atual += m[s];
		}
		cout << total+atual << endl;
	}
	return 0;
}