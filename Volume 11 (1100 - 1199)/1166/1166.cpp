#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> topo(51, 0), aresta(51);
	topo[1] = aresta[1] = 1;
	for (int i = 2, prox = 2, atual = 2; i <= 50; i++, atual++) {
		for (int j = 1; j <= atual; j++) {
			double sq = (double)sqrt(topo[j]+prox);
			if (sq - floor(sq) == 0 || topo[j] == 0) {
				topo[j] = prox++;
				j = 0;
			}
		}
		aresta[i] = prox-1;
	}
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << aresta[n] << endl;
	}
	return 0;
}