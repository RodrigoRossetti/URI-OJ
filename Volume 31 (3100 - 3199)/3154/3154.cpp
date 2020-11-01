#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int d, p;
	cin >> d >> p;
	double prb = 1;
	for (int i = 1; i < p; i++)
		prb *= (double)(d-i)/d;
	cout << fixed << setprecision(2) << (1-prb)*100 << endl;
	return 0;
}