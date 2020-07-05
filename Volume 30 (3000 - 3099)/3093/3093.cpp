#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	string s;
	while (n--) {
		cin >> s;
		bool a = 0, b = 0, c = 0, d = 0;
		for (int i = 0; i < s.length(); i++) {
			if (a && b && c && d) break;
			if (s[i] == 'Q')a = 1;
			else if (s[i] == 'J') b = 1;
			else if (s[i] == 'K') c = 1;
			else if (s[i] == 'A') d = 1;
		}
		if (a && b && c && d) cout << "Aaah muleke\n";
		else cout << "Ooo raca viu\n";
	}
	return 0;
}