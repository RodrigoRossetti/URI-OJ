#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	long long arr[n+1];
	arr[0] = 1;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i <= n; i++)
		arr[i] = (arr[i-3]+arr[i-2]+arr[i-1])%1000000007;
	cout << arr[n] << endl;
	return 0;
}