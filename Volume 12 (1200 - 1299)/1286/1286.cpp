#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int> wt, vector<int> val, int n) {
	int i, w;
	int K[n+1][W+1];

	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0) K[i][w] = 0;
			else if (wt[i-1] <= w) K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
			else K[i][w] = K[i-1][w];
		}
	}
	return K[n][W];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, p;
	while (cin >> n && n) {
		cin >> p;
		vector<int> val(n), wt(n);
		for (int i = 0; i < n; i++) cin >> val[i] >> wt[i];
		cout << knapsack(p, wt, val, n) << " min.\n";
	}
	return 0;
}