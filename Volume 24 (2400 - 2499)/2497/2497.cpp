#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, i = 1;
	while (cin >> n && n != -1) {
		int k = n / 2;
		cout << "Experiment " << i << ": " << k << " full cycle(s)\n";
		i++;
	}
	return 0;
}