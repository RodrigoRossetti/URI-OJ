#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, flag = 1;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 1; i < n; i++) if (arr[i] > arr[0]) flag = 0;
	flag ? cout << "S\n" : cout << "N\n";
	return 0;
}