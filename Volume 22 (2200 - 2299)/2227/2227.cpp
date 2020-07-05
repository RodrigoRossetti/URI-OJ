#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, v, x, y, k, t = 1;
	while (cin >> a >> v && (a || v)) {
		vector<int> arr(a, 0);
		while (v--) {
			cin >> x >> y;
			arr[x-1]++, arr[y-1]++;
		}
		k = *max_element(arr.begin(), arr.end());
		cout << "Teste " << t++ << endl;
		for (int i = 0; i < a; i++)
			if (arr[i] == k)
				cout << i+1 << " ";
		cout << endl << endl;
	}
	return 0;
}