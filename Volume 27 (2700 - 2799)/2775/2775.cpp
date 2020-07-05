#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, total;
	bool troca;
	while (cin >> n) {
		total = 0;
		vector<pair<int, int>> v(n);
		for (int i = 0; i < n; i++) cin >> v[i].first;
		for (int i = 0; i < n; i++) cin >> v[i].second;
		troca = 1;
		for (int i = 0; i < n-1 && troca; i++) {
			troca = 0;
    		for (int j = 0; j < n-i-1; j++) {
        		if (v[j].first > v[j+1].first) {
            		swap(v[j], v[j+1]);
					total += v[j].second + v[j+1].second;
					troca = 1;
				}
			}
		}
		cout << total << endl;
	}
	return 0;
}