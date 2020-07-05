#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int v, a, r, k = 0;
	cin >> v >> a;
	r = v%a;
	if (r != 0) {
		k = ceil((double)v/a);
		for (int i = 0; i < r; i++)
			cout << k << endl;
	}
	k = floor((double)v/a);
	for (int i = 0; i < a-r; i++)
			cout << k << endl;
	return 0;
}