#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double n, x;
	cin >> n >> x;
	cout << fixed << setprecision(2) << x/(n+2) << endl;
	return 0;
}