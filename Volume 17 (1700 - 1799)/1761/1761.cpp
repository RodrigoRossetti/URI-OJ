#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c, h;
	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
		h = 5*((tan(a*(3.141592654/180))*b)+c);
		printf("%.2lf\n", h);
	}
    return 0;
}