#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	while (cin >> n) {
		getline(cin, s);
		while (n--) {
			getline(cin, s);
			int espaco = 0;
			for( int i = 0; i < s.length(); i++)
				if(s[i] == ' ') espaco++;
			int carac = 96;
			for (int i = 0; i < s.length(); i++) {
				if(s[i] == ' ') break;
				else carac++;
			}
			if (espaco == 0) printf("%c\n", carac);
			else {
				int c;
				if (espaco == 1) c = 3;
				else if (espaco == 2) c = 6;
				else if (espaco == 3) c = 9;
				else if( espaco == 4) c = 12;
				else if (espaco == 5) c = 15;
				else if (espaco == 6) c = 18;
				else if (espaco == 7) c = 21;
				else if (espaco == 8) c = 24;
				printf("%c\n", c+carac);	
			}
		}
	}
	return 0;
}