#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int k;
	vector<unsigned long long> v = {0, 36, 360, 4005, 40050, 404550, 4045500, 40495500, 404955000,
	4049955000, 40499550000, 404999550000, 4049995500000, 40499995500000, 404999955000000,
	4049999955000000, 40499999550000000, 404999999550000000};
	cin >> k;
	cout << v[k-1] << endl;
	return 0;
}