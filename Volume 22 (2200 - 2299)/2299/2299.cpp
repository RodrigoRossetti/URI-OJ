#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int knapsack(int w, vector<int>& val, vector<int>& wt) {
	int n = wt.size();
    vector<int> dp(w+1, 0);
    for(int i = 0; i < n; i++)
        for(int j = w; j >= wt[i]; j--)
            dp[j] = max(dp[j], val[i] + dp[j-wt[i]]);
    return dp[w];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, f, caso = 1;
	while (cin >> c >> f && (c || f)) {
		vector<int> val(f), wt(f);
		for (int i = 0; i < f; i++)
			cin >> wt[i] >> val[i];
		cout << "Teste " << caso++ << endl;
		cout << knapsack(c, val, wt) << endl;
		cout << endl;
	}
	return 0;
}