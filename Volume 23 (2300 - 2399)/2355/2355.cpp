#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) cout << fixed << setprecision(0) << "Brasil " << floor((double)n/90) << " x Alemanha " << ceil(((double)n/90)*7) << endl;
	return 0;
}