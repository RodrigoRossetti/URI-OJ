#include <bits/stdc++.h>
using namespace std;

int lcs(string &x, string &y) {
	int m = x.length(), n = y.length();
    vector<vector<int>> dp(m+1, vector<int>(n+1));
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
			if (i == 0 || j == 0) dp[i][j] = 0;
			else if (x[i-1] == y[j-1]) dp[i][j] = dp[i-1][j-1]+1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[m][n];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b;
	cin >> a >> b;
	cout << lcs(a, b) << endl;
	return 0;
}