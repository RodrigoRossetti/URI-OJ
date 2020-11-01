#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m, a, b;
	cin >> n >> m;
	vector<int> degree(n);
	while (m--) {
		cin >> a >> b;
		degree[a]++, degree[b]++;
	}
	bool flag = 1;
	for (int i = 0; i < n; i++)
		if (degree[i] % 2 != 0)
			flag = 0;
	cout << (flag ? "Rambo esta salvo" : "Rambo esta perdido") << endl;
	return 0;
}