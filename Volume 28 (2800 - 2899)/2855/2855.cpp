#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	while (cin >> n) {
		vector<int> v(n);
		for (int i = 0; i < n; i++) cin >> v[i];
		cin >> k;
		int pos = lower_bound(v.begin(), v.end(), k) - v.begin() + 1;
		bool sorte = 1;
        for (int i = 2; i < 305345 && sorte && pos >= i; i++){
            if (pos % i == 0) sorte = 0;
            pos -= (pos / i);   
        }
        cout << (sorte ? "Y\n" : "N\n");
	}
	return 0;
}