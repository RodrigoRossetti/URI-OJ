#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n;
	while (cin >> n) {
		unsigned long long t = 1, i = 10, k = 1;
		while (k % n != 0) k = (k+i)%n, i = (i*10)%n, t++;
		cout << t << endl;
	}
	return 0;
}