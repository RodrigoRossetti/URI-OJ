#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long c, g, dias;
	cin >> c >> g;
	dias = c/g;
	if (dias >= 10) cout << "A UFSC fecha dia " << dias-9 << " de outubro.\n";
	else cout << "A UFSC fecha dia " << dias+21 << " de setembro.\n";
	return 0;
}