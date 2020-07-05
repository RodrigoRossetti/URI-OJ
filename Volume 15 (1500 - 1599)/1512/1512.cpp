#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	while (cin >> n >> a >> b && (n || a || b)) cout << (n/a)+(n/b)-(n/(a*b/__gcd(a, b))) << endl;
	return 0;
}