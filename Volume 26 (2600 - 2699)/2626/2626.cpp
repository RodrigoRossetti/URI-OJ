#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b, c;
	while (cin >> a >> b >> c) {
		if ((a == "papel" && b == "pedra" && c == "pedra") ||
		(a == "pedra" && b == "tesoura" && c == "tesoura") ||
		(a == "tesoura" && b == "papel" && c == "papel"))
			cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
		else if ((b == "papel" && a == "pedra" && c == "pedra") ||
		(b == "pedra" && a == "tesoura" && c == "tesoura") ||
		(b == "tesoura" && a == "papel" && c == "papel"))
			cout << "Iron Maiden's gonna get you, no matter how far!\n";
		else if ((c == "papel" && a == "pedra" && b == "pedra") ||
		(c == "pedra" && a == "tesoura" && b == "tesoura") ||
		(c == "tesoura" && a == "papel" && b == "papel"))
			cout << "Urano perdeu algo muito precioso...\n";
		else if (a == b || b == c || a == c)
			cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
		else
			cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
	}
	return 0;
}