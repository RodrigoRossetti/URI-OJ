#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define N 10001

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, soma;
	vector<int> sol(N, 0);
	for (int i = 0; i < N; i++) {
		for (int j = i; j < N; j++) {
			for (int k = j; k < N; k++) {
				soma = i*j+i*k+j*k;
				if (soma >= N) k = N;
				else sol[soma]++;
			}
		}
	}
	while (cin >> n && n != -1) cout << sol[n] << endl;
	return 0;
}