#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cin >> n >> ws;
	while (n--) {
		getline(cin, s);
		for (int i = 0, total = 0; i < s.length() && total < 12; i++) {
			switch(s[i]) {
				case 'G':  case 'Q': case 'a': case 'k': case 'u': cout << 0; total++; break;
				case 'I':  case 'S': case 'b': case 'l': case 'v': cout << 1; total++; break;
				case 'E':  case 'O': case 'Y': case 'c': case 'm': case 'w': cout << 2; total++; break;
				case 'F':  case 'P': case 'Z': case 'd': case 'n': case 'x': cout << 3; total++; break;
				case 'J':  case 'T': case 'e': case 'o': case 'y': cout << 4; total++; break;
				case 'D':  case 'N': case 'X': case 'f': case 'p': case 'z': cout << 5; total++; break;
				case 'A':  case 'K': case 'U': case 'g': case 'q': cout << 6; total++; break;
				case 'C':  case 'M': case 'W': case 'h': case 'r': cout << 7; total++; break;
				case 'B':  case 'L': case 'V': case 'i': case 's': cout << 8; total++; break;
				case 'H':  case 'R': case 'j': case 't': cout << 9; total++; break;
			}
		}
		cout << endl;
	}
	return 0;
}