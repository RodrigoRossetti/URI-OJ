#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int c, n;
	cin >> c >> n;
	int k = c/n;
	vector<int> v(n+1);
	for (int i = 0; i < n; i++) cin >> v[i];
	v[n] = v[0]+c;
	bool flag = 0;
	for (double i = v[0]+0.1; i < v[1]; i++) {
		double atual = i;
		bool flag2 = 1;
		for (int j = 1; j <= n; j++) {
			if (v[j] > atual && v[j] <= atual+k) atual += k;
			else {
				flag2 = 0;
				break;
			}
		}
		if (flag2) {
			flag = 1;
			break;
		}
	}
	cout << (flag ? "S" : "N") << endl;
	return 0;
}