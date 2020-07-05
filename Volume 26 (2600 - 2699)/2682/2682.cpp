#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long x, y = 0, saida = 0;
	bool flag = 1;
	while (cin >> x) {
		if (x <= y && flag) {
			saida = y+1;
			flag = 0;
		}
		y = x;
	}
	if (saida == 0) saida = y+1;
	cout << saida << endl;
	return 0;
}