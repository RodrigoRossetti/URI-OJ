#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long n, lado = 2;
	cin >> n;
	while (n--) lado += lado-1;
	cout << lado*lado << endl;
	return 0;
}