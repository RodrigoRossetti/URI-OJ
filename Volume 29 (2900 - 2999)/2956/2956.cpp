#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long double b, h;
	cin >> b >> h;
	cout << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = " << fixed << setprecision(5) << (b*h)/2 << ".\n";
	return 0;
}