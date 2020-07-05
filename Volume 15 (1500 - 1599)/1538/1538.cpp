#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n;
	string s = "ABCD";
	while (cin >> n && n) {
		n *= n;
		string out = "";
		do {
			out += s[n%4];
			n /= 4;
		} while (n);
		reverse(out.begin(), out.end());
		cout << out << endl;
	}
	return 0;
}