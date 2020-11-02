#include <bits/stdc++.h>
using namespace std;

bool solve(int a, int b, int c, int d, int e, int k) {
	vector<int> v = {a, b, c, d, e};
	unsigned long long total = 0;
	do {
		total += v[0]*10000+v[1]*1000+v[2]*100+v[3]*10+v[4];
	} while (next_permutation(v.begin(), v.end()));
	return total == k;
}

int main() {
	int t, k;
	cin >> t;
	while (t--) {
		cin >> k;
		bool flag = 1;
		for (int a = 0; a <= 9; a++) {
			for (int b = a+1; b <= 9; b++) {
				for (int c = b+1; c <= 9; c++) {
					for (int d = c+1; d <= 9; d++) {
						for (int e = d+1; e <= 9; e++) {
							if (solve(a, b, c, d, e, k)) {
								printf("{%d,%d,%d,%d,%d}\n", a, b, c, d, e);
								flag = 0;
							}
						}
					}
				}
			}
		}
		if (flag) printf("impossivel\n");
		puts("");
	}
	return 0;
}