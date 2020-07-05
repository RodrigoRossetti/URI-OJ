#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (cin >> s && s != "0") {
		unsigned long long total = 1;
		for (int i = 2; i <= s.length(); i++)
			total *= i;
		cout << total << endl;
	}
	return 0;
}