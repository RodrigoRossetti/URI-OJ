#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b, c, d, total = 0;
	cin >> n;
	vector<vector<bool>> v(101, vector<bool>(101, 0));
	while (n--) {
		cin >> a >> b >> c >> d;
		for (int i = a; i < b; i++)
			for (int j = c; j < d; j++)
				if (!v[i][j])
					v[i][j] = 1, total++;
	}
	cout << total << endl;
	return 0;
}