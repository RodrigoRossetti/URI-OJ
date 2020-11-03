#include <bits/stdc++.h>
using namespace std;

int lcs(string& a, string& b) {
	int n = a.length(), m = b.length();
	vector<vector<int>> dp(n+1, vector<int>(m+1));
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			if (i == 0 || j == 0)
				dp[i][j] = 0;
			else if (a[i-1] == b[j-1])
				dp[i][j] = dp[i-1][j-1]+1;
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[n][m];
}

string read() {
	char c;
	string s = "";
	while ((c = getchar()) != '\n' && c != EOF) {
		if (islower(c)) s += toupper(c), s += toupper(c);
		else s += c;
	}
	return s;
}

int main() {
	string a = read(), b = read();
	printf("%d\n", lcs(a, b));
	return 0;
}