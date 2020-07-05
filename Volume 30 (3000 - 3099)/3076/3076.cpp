#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n) cout << (n % 100 == 0 ? n/100 : n/100 + 1) << endl;
	return 0;
}