#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin, s);
	int total = 0, soma = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '1' && s[i+1] == '0') soma += 10, i++;
		else soma += s[i]-'0';
		total++;
	}
	cout << fixed << setprecision(2) << (double)soma/total << endl;
	return 0;
}