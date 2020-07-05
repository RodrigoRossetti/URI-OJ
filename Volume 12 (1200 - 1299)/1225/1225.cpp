#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	unsigned long long total;
	int n, x, media;
	double d;
	vector<int> v;
	while (cin >> n) {
		v.clear();
		total = 0;
		for (int i = 0; i < n; i++) {
			cin >> x;
			v.push_back(x);
			total += x;
		}
		d = (double)total / n, media = total / n;
		if (d != media) cout << -1 << endl;
		else {
			total = 0;
			for (int i = 0; i < n; i++)
				total += abs(media-v[i]);
			cout << (total/2)+1 << endl;
		}
	}
	return 0;
}