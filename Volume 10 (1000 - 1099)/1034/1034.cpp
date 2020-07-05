#include <bits/stdc++.h>
using namespace std;

int coinChangeMin(vector<int> coins, int m, int V) {
	vector<int> dp(V+1, INT_MAX);
	dp[0] = 0;
	for (int i = 1; i <= V; i++)
		for (int j = 0; j < m; j++)
			if (coins[j] <= i)
				dp[i] = min(dp[i], 1 + dp[i-coins[j]]);
	return dp[V];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, m, v;
	cin >> t;
	while (t--) {
		cin >> m >> v;
		vector<int> coins(m);
		for (int i = 0; i < m; i++) cin >> coins[i];
		cout << coinChangeMin(coins, m, v) << endl;
	}
	return 0;
}