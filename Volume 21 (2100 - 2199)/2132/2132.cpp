#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int caso = 1;
	string s;
	while (getline(cin, s)) {
		cout << "Palavra " << caso++ << endl;
		long long total = 0;
		for (int i = s.length()-1, j = 0; i >= 0; i--, j++)
			if (s[i] == 'b')
				total += powl(2, j);
		cout << total << endl << endl;
	}
	return 0;
}