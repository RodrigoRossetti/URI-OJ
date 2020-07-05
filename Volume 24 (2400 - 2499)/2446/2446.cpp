#include <bits/stdc++.h>
using namespace std;

int KnapSack(int W, vector<int> wt, vector<int> val, int n) {
	vector<int> dp(W+1, 0);
	for(int i = 0; i < n; i++)
		for(int j = W; j >= wt[i]; j--)
			dp[j] = max(dp[j], val[i] + dp[j-wt[i]]);
	return dp[W];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int v, m;
	cin >> v >> m;
	vector<int> val(m), wt(m);
	for (int i = 0; i < m; i++) cin >> val[i];
	wt = val;
	if (KnapSack(v, wt, val, m) == v) cout << "S\n";
	else cout << "N\n";
	return 0;
}