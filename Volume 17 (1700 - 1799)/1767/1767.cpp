#include <bits/stdc++.h>
using namespace std;

void printKnapSack(int W, vector<int> wt, vector<int> val, int n) {
	int i, w;
	int K[n+1][W+1];

	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0) K[i][w] = 0;
			else if (wt[i-1] <= w) K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]);
			else K[i][w] = K[i-1][w];
		}
	}
	cout << K[n][W] << " brinquedos\n";

	int res = K[n][W], total = 0;
	w = W;
	for (i = n; i > 0 && res > 0; i--) {
		if (res == K[i-1][w]) continue;
		else {
			total++;
			res -= val[i-1], w -= wt[i-1];
		}
	}
	cout << "Peso: " << 50-w << " kg\n";
	cout << "sobra(m) " << n-total << " pacote(s)\n\n";
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, p;
	cin >> n;
	while (n--) {
		cin >> p;
		vector<int> val(p), wt(p);
		for (int i = 0; i < p; i++) cin >> val[i] >> wt[i];
		printKnapSack(50, wt, val, p);
	}
	return 0;
}