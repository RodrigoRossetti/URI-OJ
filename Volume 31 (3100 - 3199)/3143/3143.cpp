#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total = 0;
	cin >> n >> ws;
	string s;
	while (getline(cin, s)) {
		for (int i = 0; i < s.length(); i += n, total++) {
			if (s[i] == ' ') {
				for (int j = i+1; j < s.length(); j++) {
					if (s[j] != ' ') {
						i = j;
						break;
					}
				}
			}
		}
	}
	cout << total << endl;
	return 0;
}