#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int unboundedKnapsack(int w, vector<int>& val, vector<int>& wt) {
	int n = val.size();
	vector<int> dp(w+1, 0);
    for (int i = 0; i <= w; i++)
		for (int j = 0; j < n; j++)
			if (wt[j] <= i)
				dp[i] = max(dp[i], dp[i-wt[j]] + val[j]);
    return dp[w];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, t;
	cin >> n >> t;
	vector<int> val(n), wt(n);
	for (int i = 0; i < n; i++)
		cin >> wt[i] >> val[i];
	cout << unboundedKnapsack(t, val, wt) << endl;
	return 0;
}