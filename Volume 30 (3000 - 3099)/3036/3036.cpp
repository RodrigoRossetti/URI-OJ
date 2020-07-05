#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long double v;
	cin >> v;
	long double cor = (((sqrtl((double)(300000000-v)/(300000000+v))-1)*700)+700);
	if (cor < 400) cout << "invisivel\n";
	else if (cor >= 400 && cor < 425) cout << "violeta\n";
	else if (cor >= 425 && cor < 445) cout << "anil\n";
	else if (cor >= 445 && cor < 500) cout << "azul\n";
	else if (cor >= 500 && cor < 575) cout << "verde\n";
	else if (cor >= 575 && cor < 585) cout << "amarelo\n";
	else if (cor >= 585 && cor < 620) cout << "laranja\n";
	else if (cor >= 620 && cor < 750) cout << "vermelho\n";
	else if (cor >= 750) cout << "invisivel\n";
	return 0;
}