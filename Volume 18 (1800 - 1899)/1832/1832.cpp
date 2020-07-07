#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

unordered_map<int, char> mapa = { {64, ' '} };

void build_map(int a, int b, char c) {
	for (int i = a, ch = c; i <= b; i++, ch++)
		mapa[i] = ch;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	build_map(129, 137, 'a');
	build_map(145, 153, 'j');
	build_map(162, 169, 's');
	build_map(193, 201, 'A');
	build_map(209, 217, 'J');
	build_map(226, 233, 'S');
	build_map(240, 249, '0');
	string s;
	int n;
	while (getline(cin, s)) {
		stringstream ss(s);
		while (ss >> oct >> n) cout << mapa[n];
		cout << endl;
	}
	return 0;
}