#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	unordered_map<string, unsigned long long> mapa; 
	getline(cin, s);
	for (int i = 1; i < s.length(); i++) {
		string sub = "";
		sub += tolower(s[i-1]);
		sub += tolower(s[i]);
		mapa.count(sub) == 0 ? mapa[sub] = 1 : mapa[sub]++;
	}
	unsigned long long maior = 0;
	string final = "";
	for (unordered_map<string, unsigned long long>::iterator it = mapa.begin(); it != mapa.end(); it++)
		if (it->second > maior || (it->second == maior && it->first < final))
			maior = it->second, final = it->first;
	cout << final << ':' << maior << endl;
	return 0;
}