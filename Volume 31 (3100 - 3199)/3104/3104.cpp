#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int mod(string a, int b) {
	int r = 0;
	for (auto &c : a)
		r = (r*10 + c-'0') % b;
	return r;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a;
	int b;
	cin >> a >> b;
	cout << mod(a, b) << endl;
	return 0;
}