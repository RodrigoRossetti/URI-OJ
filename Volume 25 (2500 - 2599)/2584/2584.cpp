#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;
	scanf("%d", &c);
	while (c--) {
		double n, h;
		scanf("%lf", &n);
		h = n/2/tan(36*3.14159265358979323846/180);
		printf("%.3lf\n", 5*n/2*h);
	}
	return 0;
}