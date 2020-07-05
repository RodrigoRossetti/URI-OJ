#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)) {
		int total = 0;
		for (int i = 0; i < s.length(); i++) {
			char c = tolower(s[i]);
			switch(c) {
				case 'a': case 'j': case 's': total += 1; break;
				case 'b': case 'k': case 't': total += 2; break;
				case 'c': case 'l': case 'u': total += 3; break;
				case 'd': case 'm': case 'v': total += 4; break;
				case 'e': case 'n': case 'w': total += 5; break;
				case 'f': case 'o': case 'x': total += 6; break;
				case 'g': case 'p': case 'y': total += 7; break;
				case 'h': case 'q': case 'z': total += 8; break;
				case 'i': case 'r': total += 9; break;
			}
		}
		int k = total%9;
		if (k == 0) k = 9;
		cout << k << endl;
	}
	return 0;
}