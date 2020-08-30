#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)) {
		long long total = 0;
		for (int i = s.length()-1, k = 0; i >= 0; i--, k++)
			total += (pow(26, k))*(s[i]-'A'+1);
		if (total > 16384) cout << "Essa coluna nao existe Tobias!\n";
		else cout << total << endl;
	}
	return 0;
}