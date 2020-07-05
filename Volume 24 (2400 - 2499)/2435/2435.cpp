#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n1, n2, d1, d2, v1, v2;
	cin >> n1 >> d1 >> v1 >> n2 >> d2 >> v2;
	if ((double)d1/v1 < (double)d2/v2) cout << n1 << endl;
	else cout << n2 << endl;
	return 0;
}