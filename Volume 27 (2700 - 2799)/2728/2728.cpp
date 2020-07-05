#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)) {
		stringstream ss(s);
		int c = 0;
		while (getline(ss, s, '-')) {
			switch (c) {
				case 0: if (tolower(s[0]) == 'c' || tolower(s[s.length()-1]) == 'c') c++; break;
				case 1: if (tolower(s[0]) == 'o' || tolower(s[s.length()-1]) == 'o') c++; break;
				case 2: if (tolower(s[0]) == 'b' || tolower(s[s.length()-1]) == 'b') c++; break;
				case 3: if (tolower(s[0]) == 'o' || tolower(s[s.length()-1]) == 'o') c++; break;
				case 4: if (tolower(s[0]) == 'l' || tolower(s[s.length()-1]) == 'l') c++; break;
			}
		}
		cout << (c == 5 ? "GRACE HOPPER" : "BUG") << endl;
	}
	return 0;
}