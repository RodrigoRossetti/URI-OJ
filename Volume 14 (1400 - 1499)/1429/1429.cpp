#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	int fat[5] = {1, 2, 6, 24, 120};
	while (cin >> s && s != "0") {
		int total = 0;
		for (int i = 0; i < s.length(); i++)
			total += (s[i]-'0')*(fat[s.length()-i-1]);
 		cout << total << endl;
	}
	return 0;
}