#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, a, b, c;
	cin >> m >> a >> b;
	c = m-a-b;
	cout << max({a, b, c}) << endl;
	return 0;
}