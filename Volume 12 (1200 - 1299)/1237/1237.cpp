#include <bits/stdc++.h>
using namespace std;

int LCSubStr(string s1, string s2, int m, int n) {
    int dp[m+1][n+1];
    int maior = 0;
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (!i || !j) dp[i][j] = 0;
            else if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1]+1;
                maior = max(maior, dp[i][j]);
            }
            else dp[i][j] = 0;
        }
    }
    return maior;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s1, s2;
	while (getline(cin, s1)) {
		getline(cin, s2);
		cout << LCSubStr(s1, s2, s1.length(), s2.length()) << endl;
	}
	return 0;
}