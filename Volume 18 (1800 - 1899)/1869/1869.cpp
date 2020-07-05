#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n;
	vector<char> base32 = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 
	'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V'};
	while (cin >> n) {
		string s = "";
		if (!n) s += '0';
		while (n) {
			s += base32[n%32];
			n /= 32;
		}
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	return 0;
}