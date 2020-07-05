#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m = 0, f = 0;
	string s;
	char c;
	cin >> n;
	while (n--) {
		cin >> s >> c;
		if (c == 'M') m++;
		else if (c == 'F') f++;
	}
	cout << m << " carrinhos\n" << f << " bonecas\n";
	return 0;
}