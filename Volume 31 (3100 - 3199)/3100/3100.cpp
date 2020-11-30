#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	int three = 0, five = 0, seven = 0;
	for (auto& x : s) {
		if (x == '3' && !seven) three++;
		else if (x == '5') five++;
		else if (x == '7') seven = 1;
	}
	while (three--) cout << '3';
	while (five--) cout << '5';
	seven = 0;
	for (auto& x : s) {
		if (x == '7') seven = 1;
		if (x != '5' && seven) cout << x;
	}
	cout << endl;
	return 0;
}