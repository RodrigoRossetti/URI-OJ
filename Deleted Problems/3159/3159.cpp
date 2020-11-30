#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int pos[26] = {0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 3, 0, 1, 2, 0, 1, 2, 3};
int loc[26] = {2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cin >> n >> ws;
	while (n--) {
		getline(cin, s);
		int ultimo = -1;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == ' ') {
				cout << '0';
				ultimo = -1;
				continue;
			}
			int k = tolower(s[i])-'a';
			if (isupper(s[i])) cout << '#';
			else if (ultimo != -1 && ultimo == loc[k]) cout << '*';
			for (int i = 0; i <= pos[k]; i++)
				cout << loc[k];
			ultimo = loc[k];
		}
		cout << endl;
	}
	return 0;
}