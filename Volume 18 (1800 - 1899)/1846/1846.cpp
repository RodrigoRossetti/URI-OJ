#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s, aux;

	vector<string> m1 = {"zero", "um", "dois", "tres", "quatro", "cinco", "seis", "sete", "oito", "nove"};

	vector<string> m2 = {"dez", "onze", "doze", "treze", "quatorze", "quinze", "dezesseis", "dezessete",
		"dezoito", "dezenove"};

	vector<string> m3 = {"", "", "vinte", "trinta", "quarenta", "cinquenta", "sessenta", "setenta",
		"oitenta", "noventa"};

	vector<string> m4 = {"", "cento", "duzentos", "trezentos", "quatrocentos", "quinhentos", "seiscentos",
		"setecentos", "oitocentos", "novecentos"};

	while (getline(cin, s)) {
		string out = "";
		bool flag = 0, mil = 0;
		if (s == "0") out += "zero ";
		for (int i = 0, j = s.length(); i < s.length(); i++, j--) {
			if (s[i] == '0') {
				if (j == 4 && !mil) {
					out += "mil ";
					mil = 1;
				}
				continue;
			}
			if (flag && j != 3) out += "e ";
			if ((j == 6 || j == 3)) {
				if (s[i] == '1' && s[i+1] == '0' && s[i+2] == '0') {
					if (flag) out += "e ";
					out += "cem";
				}
				else {
					if (flag && s[i+1] == '0' && s[i+2] == '0') out += "e ";
					out += m4[s[i]-'0'];
				}
			}
			else if (j == 5 || j == 2) {
				if (s[i] == '1') out += m2[s[i+1]-'0'], i++, j--;
				else out += m3[s[i]-'0'];
				if (j == 4 && s[i-1] == '1') out += " mil", mil = 1;
			}
			else if (j == 4) {
				if (s.length() > 4 && s[i-1] != '1') {
					out += m1[s[i]-'0'];
					flag = 1;
				}
				else if (s[i] != '1') {
					out += m1[s[i]-'0'];
					flag = 1;
				}
				if (flag && out[out.length()-1] != ' ') out += " ";
				if (!mil) {
					out += "mil";
					mil = 1;
				}
			}
			else if (j == 1) {
				out += m1[s[i]-'0'];
			}
			if (out[out.length()-1] != ' ') out += " ";
			flag = 1;
		}
		cout << out.substr(0, out.length()-1) << endl;
	}
	return 0;
}