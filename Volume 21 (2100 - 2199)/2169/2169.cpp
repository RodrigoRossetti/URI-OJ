#include <bits/stdc++.h>
using namespace std;

double KnapSack(int W, vector<double> wt, vector<double> val, int n) {
	vector<double> dp(W+1, 0);
	for(int i = 0; i < n; i++)
		for(int j = W; j >= wt[i]; j--)
			dp[j] = max(dp[j], val[i] + dp[j-wt[i]]);
	return dp[W];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n, k;
	string s;
	map<string, double> balas = {{"HANDGUN", 2}, {"RED9", 3.5}, {"BLACKTAIL", 3.5}, {"MATILDA", 2},
								{"HANDCANNON", 60}, {"STRIKER", 12}, {"TMP", 1.2}, {"RIFLE", 12}};
	map<string, int> inimigos = {{"GANADOS", 50}, {"COBRAS", 40}, {"ZEALOT", 75}, {"COLMILLOS", 60},
								{"GARRADOR", 125}, {"LASPLAGAS", 100}, {"GATLINGMAN", 150},
								{"REGENERATOR", 250}, {"ELGIGANTE", 500}, {"DR.SALVADOR", 350}};
	while (cin >> n) {
		vector<double> val(n), wt(n);
		for (int i = 0; i < n; i++) {
			cin >> s >> k;
			val[i] = balas[s]*k, wt[i] = k;
		}
		cin >> m;
		int total = 0;
		while (m--) {
			cin >> s >> k;
			total += inimigos[s]*k;
		}
		cin >> m;
		if (KnapSack(m, wt, val, n) >= total) cout << "Missao completada com sucesso\n\n";
		else cout << "You Are Dead\n\n";
	}
	return 0;
}