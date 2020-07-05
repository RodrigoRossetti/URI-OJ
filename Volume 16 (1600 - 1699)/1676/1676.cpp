#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<bool> sorte(35000, 1);
	vector<int> sortes;
	for (int i = 2; i < 35000; i++) {
		if (sorte[i]) {
			sortes.push_back(i);
			int total = 0;
			for (int j = i+1; j < 35000; j++) {
				if (sorte[j]) {
					total++;
					if (total == i) sorte[j] = 0, total = 0;
				}
			}
		}
	}
	int n;
	while (cin >> n && n) cout << sortes[n-1] << endl;
	return 0;
}