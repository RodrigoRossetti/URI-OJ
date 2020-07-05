#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i++) {
			if (isdigit(s[i])) cout << s[i];
			else {
				switch(toupper(s[i])) {
					case 'A': case 'B': case 'C': cout << '2'; break;
					case 'D': case 'E': case 'F': cout << '3'; break;
					case 'G': case 'H': case 'I': cout << '4'; break;
					case 'J': case 'K': case 'L': cout << '5'; break;
					case 'M': case 'N': case 'O': cout << '6'; break;
					case 'P': case 'Q': case 'R': case 'S': cout << '7'; break;
					case 'T': case 'U': case 'V': 			cout << '8'; break;
					case 'W': case 'X': case 'Y': case 'Z': cout << '9'; break;
					case '*': case '#': cout << s[i]; break;
				}
			}
		}
		cout << endl;
	}
	return 0;
}