#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total = 0;
	cin >> n;
	while (n >= 40320) n -= 40320, total++;
	while (n >= 5040) n -= 5040, total++;
	while (n >= 720) n -= 720, total++;
	while (n >= 120) n -= 120, total++;
	while (n >= 24) n -= 24, total++;
	while (n >= 6) n -= 6, total++;
	while (n >= 2) n -= 2, total++;
	while (n >= 1) n -= 1, total++;
	cout << total << endl;
	return 0;
}