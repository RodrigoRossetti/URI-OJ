#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

string read(vector<string>& v) {
	string s, r = "";
	int n, x, y;
	cin >> n >> x >> y >> ws;
	x--, y--;
	if (n == 0) {
		r.push_back(v[x][y]);
		return r;
	}
	getline(cin, s);
	for (int i = 0; i < n; i++) {
		r.push_back(v[x][y]);
		switch (s[i]) {
			case 'N': x--; break;
			case 'S': x++; break;
			case 'W': y--; break;
			case 'E': y++; break;
		}
	}
	r.push_back(v[x][y]);
	return r;
}

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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, h, w;
	cin >> t;
	for (int caso = 1; caso <= t; caso++) {
		cin >> h >> w >> ws;
		vector<string> v(h);
		for (int i = 0; i < h; i++)
			getline(cin, v[i]);
		string sa = read(v), sb = read(v);
		int k = lcs(sa, sb);
		cout << "Case " << caso << ": " << sa.length()-k << " " << sb.length()-k << endl;
	}
	return 0;
}