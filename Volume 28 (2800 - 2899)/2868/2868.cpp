#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y, z, resp, dif;
	char op, igual;
	cin >> n;
	while (n--) {
		cin >> x >> op >> y >> igual >> z;
		switch(op) {
			case '+': resp = x+y; break;
			case '-': resp = x-y; break;
			case 'x': resp = x*y; break;
		}
		dif = abs(resp-z);
		cout << "E";
		for (int i = 0; i < dif; i++) cout << "r";
		cout << "ou!\n";	
	}
	return 0;
}