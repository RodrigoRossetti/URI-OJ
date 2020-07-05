#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
    scanf ("%d.%d", &a, &b);
    int r = 100*a+b;
    printf("%d\n", 36000/(__gcd(36000, r)));
	return 0;
}