#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, n, k;
	string s, aux;
	cin >> t;
	while (t--) {
		cin >> s;
		aux = "";
		for (int i = 0; i < s.length() && s[i] != '!'; i++)
			aux += s[i];
		k = s.length()-aux.length();
		n = stoi(aux);
		unsigned long long total = n;
		for (int i = 1; i <= n && n-(i*k) > 0; i++)
			total *= (n-(i*k));
		cout << total << endl;
	}
	return 0;
}