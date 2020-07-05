#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int lps(string s) {
    int n = s.length();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) dp[i][i] = 1;
    for (int k = 2; k <= n; k++) {
        for (int i = 0; i < n-k+1; i++) {
            int j = i+k-1;
            if (s[i] == s[j] && k == 2) dp[i][j] = 2;
            else if (s[i] == s[j]) dp[i][j] = dp[i+1][j-1] + 2;
            else dp[i][j] = max(dp[i][j-1], dp[i+1][j]);
        }
    }
    return dp[0][n-1];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin, s);
    string s2 = "";
    for (int i = 0; i < s.length(); i++)
        if (s[i] != 'a') s2 += s[i];
	cout << lps(s2) << endl;
	return 0;
}