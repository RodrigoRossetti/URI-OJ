#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long power(long long x, long long y) {
    long long res = 1;
    while (y) {
        if (y & 1) res = (res*x) % MOD;
        y >>= 1;
        x = (x*x) % MOD;
    }
    return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (cin >> s) {
		long long total = 0;
		for (int i = s.length()-1, j = 0; i >= 0; i--, j++) {
			total += (s[i]-'A')*power(26, j)%MOD;
			total %= MOD;
		}
		cout << total << endl;
	}
	return 0;
}