#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	string s;
	cin >> t;
	while (t--) {
		cin >> s;
		sort(s.begin(), s.end());
		int i = 0;
		if (s[i] == '0')
			while (i < s.length() && s[i] == '0')
				i++;
		swap(s[i], s[0]);
		cout << s << endl;
	}
	return 0;
}