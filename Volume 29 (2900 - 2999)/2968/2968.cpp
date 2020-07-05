#include <bits/stdc++.h>
using namespace std;

int main() {
	int v, n, total;
	scanf("%d %d", &n, &v);
	total = v*n;
	double a1 = total*0.1, a2 = total*0.2, a3 = total*0.3, a4 = total*0.4, a5 = total*0.5, a6 = total*0.6,
	a7 = total*0.7, a8 = total*0.8, a9 = total*0.9;
	printf("%.0lf %.0lf %.0lf %.0lf %.0lf %.0lf %.0lf %.0lf %.0lf\n", ceil(a1), ceil(a2), ceil(a3), ceil(a4), ceil(a5), ceil(a6), ceil(a7), ceil(a8), ceil(a9));
	return 0;
}