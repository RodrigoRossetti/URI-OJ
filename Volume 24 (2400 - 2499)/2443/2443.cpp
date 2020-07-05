#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d, aux, x, y, mdc;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	aux = d;
	c *= b, d *= b, a *= aux, b *= aux;
	x = a+c, y = b;
	mdc = __gcd(x, y);
	x /= mdc, y /= mdc;
	printf("%d %d\n", x, y);
	return 0;
}