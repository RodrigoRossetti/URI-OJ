#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define EULER 2.71828182845904523536
#define PI 3.14159265358979323846

long long digitos(int n) {
    if (n < 0)  return 0;
    if (n <= 1) return 1;
    long double d = ((n*log10(n/EULER)+log10(2*PI*n)/2.0));
    return floor(d)+1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cout << digitos(n) << endl;
	return 0;
}