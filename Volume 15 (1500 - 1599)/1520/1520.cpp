#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y, num;
	while (cin >> n) {
		vector<int> v;
		while (n--) {
			cin >> x >> y;
			for (int i = x; i <= y; i++) v.push_back(i);
		}
		sort(v.begin(), v.end());
		cin >> num;
		int inicio = -1, fim = -1;
		for (int i = 0; i < v.size(); i++)
			if (v[i] == num) inicio == -1 ? inicio = fim = i : fim = i;
		if (inicio == -1) cout << num << " not found\n";
		else cout << num << " found from " << inicio << " to " << fim << endl;
	}
	return 0;
}