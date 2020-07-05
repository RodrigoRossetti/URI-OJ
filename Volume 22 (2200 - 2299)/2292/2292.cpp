#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long n, c;
	string s;
	unordered_map<char, char> oposto = {{'X', 'O'}, {'O',' X'}};
	cin >> n;
	while (n--) {
		cin >> s >> c;
		int total = 0;
		for (int i = 0; i < s.length(); i++) {
			cout << (c % 2 == 0 ? s[i] : oposto[s[i]]);
			if (s[i] == 'O' && c % 2 != 0) c = c/2+1;
			else c /= 2;
		}
		cout << endl;
	}
	return 0;
}