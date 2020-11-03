#include <bits/stdc++.h>
using namespace std;

int read() {
	int x, r;
	scanf("%d.%d", &x, &r);
	return 10*x+r;
}

int main() {
	int a = read(), b = read(), c = read(), d = read();
	if (a+b+c == d || a+b+d == c || a+c+d == b || b+c+d == a) cout << "YES\n";
	else if (a+b == c+d || a+c == b+d || a+d == b+c) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}