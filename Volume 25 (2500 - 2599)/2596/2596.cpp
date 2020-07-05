#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, c;
	cin >> n;
	vector<int> arr(1001);
	arr[0] = arr[1] = 0;
	for (int i = 2, k = 0, u = 2, p = 2; i < 1001; i++, k++) {
		if (k == u) k = -1, u = 2*p, arr[i] = arr[i-1], p++;
		else arr[i] = arr[i-1]+1;
	}
	while (n--) {
		cin >> c;
		cout << arr[c] << endl;
	}
	return 0;
}