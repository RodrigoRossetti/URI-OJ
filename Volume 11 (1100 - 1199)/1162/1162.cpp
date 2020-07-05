#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, l, x;
	cin >> n;
	while(n--) {
		cin >> l;
		vector<int> v(l);
		for (int i = 0; i < l; i++) cin >> v[i];
		int total = 0;
		for (int i = 0; i < l; i++) {
			bool mov = 1;
			for (int j = 1; j < l; j++) {
				if (v[j] < v[j-1]) {
					mov = 0;
					total++;
					swap(v[j], v[j-1]);
				}
			}
			if (mov) break;
		}
		cout << "Optimal train swapping takes " << total << " swaps.\n";
	}
	return 0;
}