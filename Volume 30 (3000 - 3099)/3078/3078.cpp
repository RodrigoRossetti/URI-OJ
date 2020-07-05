#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, b, c;
	long double delta, x;
	while (cin >> n && n != -1) {
		b = n % 257, c = n % 193;
		delta = (sqrtl(b*b-4*c));
		x = sqrtl(delta-b)/sqrtl(2);
		if (isnan(x)) cout << "So o ouro\n";
		else if (x == 0) cout << "Bom\n";
		else cout << "Regular\n";
	}
	return 0;
}