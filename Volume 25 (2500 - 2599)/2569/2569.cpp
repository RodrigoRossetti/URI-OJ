#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, op, b;
	cin >> a >> op >> b;
	replace(a.begin(), a.end(), '7', '0');
	replace(b.begin(), b.end(), '7', '0');
	int x = stoi(a), y = stoi(b), k;
	if (op == "+") k = x + y;
	else if (op == "x") k = x * y;
	a = to_string(k);
	replace(a.begin(), a.end(), '7', '0');
	k = stoi(a);
	cout << k << endl;
	return 0;
}