#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int d;
	char s, c;
	while (cin >> d && d) {
		cin >> s;
		if (s == 'S') {
			vector<char> v(d);
			for (int i = 0; i < d; i++) cin >> v[i];
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < d; j++) {
					if (j) cout << " ";
					if (i == 2) cout << "..";
					else if (v[j]-'0' == 1) {
						switch (i) {
							case 0: cout << "*."; break;
							case 1: cout << ".."; break;
						}
					}
					else if (v[j]-'0' == 2) cout << "*.";
					else if (v[j]-'0' == 3) {
						switch (i) {
							case 0: cout << "**"; break;
							case 1: cout << ".."; break;
						}
					}
					else if (v[j]-'0' == 4) {
						switch (i) {
							case 0: cout << "**"; break;
							case 1: cout << ".*"; break;
						}
					}
					else if (v[j]-'0' == 5) {
						switch (i) {
							case 0: cout << "*."; break;
							case 1: cout << ".*"; break;
						}
					}
					else if (v[j]-'0' == 6) {
						switch (i) {
							case 0: cout << "**"; break;
							case 1: cout << "*."; break;
						}
					}
					else if (v[j]-'0' == 7) cout << "**";
					else if (v[j]-'0' == 8) {
						switch (i) {
							case 0: cout << "*."; break;
							case 1: cout << "**"; break;
						}
					}
					else if (v[j]-'0' == 9) {
						switch (i) {
							case 0: cout << ".*"; break;
							case 1: cout << "*."; break;
						}
					}
					else if (v[j]-'0' == 0) {
						switch (i) {
							case 0: cout << ".*"; break;
							case 1: cout << "**"; break;
						}
					}
				}
				cout << endl;
			} 
		}
		else if (s == 'B') {
			vector<vector<char>> v(3, vector<char>(2*d));
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 2*d; j++) {
					cin >> v[i][j];
				}
			}
			for (int i = 0; i < 2*d; i += 2) {
				if (v[0][i] == '*' && v[0][i+1] == '.' && v[1][i] == '.' && v[1][i+1] == '.') cout << 1;
				else if (v[0][i] == '*' && v[0][i+1] == '.' && v[1][i] == '*' && v[1][i+1] == '.') cout << 2;
				else if (v[0][i] == '*' && v[0][i+1] == '*' && v[1][i] == '.' && v[1][i+1] == '.') cout << 3;
				else if (v[0][i] == '*' && v[0][i+1] == '*' && v[1][i] == '.' && v[1][i+1] == '*') cout << 4;
				else if (v[0][i] == '*' && v[0][i+1] == '.' && v[1][i] == '.' && v[1][i+1] == '*') cout << 5;
				else if (v[0][i] == '*' && v[0][i+1] == '*' && v[1][i] == '*' && v[1][i+1] == '.') cout << 6;
				else if (v[0][i] == '*' && v[0][i+1] == '*' && v[1][i] == '*' && v[1][i+1] == '*') cout << 7;
				else if (v[0][i] == '*' && v[0][i+1] == '.' && v[1][i] == '*' && v[1][i+1] == '*') cout << 8;
				else if (v[0][i] == '.' && v[0][i+1] == '*' && v[1][i] == '*' && v[1][i+1] == '.') cout << 9;
				else if (v[0][i] == '.' && v[0][i+1] == '*' && v[1][i] == '*' && v[1][i+1] == '*') cout << 0;
			}
			cout << endl;
		}
	}
	return 0;
}