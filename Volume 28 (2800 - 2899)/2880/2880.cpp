#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	int total = s1.length()-s2.length()+1;
	for (int i = 0; i < s1.length()-s2.length()+1; i++)
		for (int j = 0; j < s2.length(); j++)
			if (s1[i+j] == s2[j]) total--, j = s2.length();
	cout << total << endl;
	return 0;
}