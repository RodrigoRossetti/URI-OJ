#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n, a = 0, b = 1;
	vector<unsigned long long> fib = {1, 1}, three;
	for (int i = 0; i < 60; a++, b++) {
		fib.push_back(fib[a]+fib[b]);
		stringstream c;
		c << fib[b+1];
		string s;
		c >> s;
		if (fib[b+1] % 3 == 0) {
			three.push_back(fib[b+1]);
			i++;
		}
		else {
			for (int i = 0; i < s.length(); i++) {
				if (s[i] == '3') {
					three.push_back(fib[b+1]);
					i++;
					break;
				}
			}
		}
	}
	while (cin >> n) cout << three[n-1] << endl;
	return 0;
}