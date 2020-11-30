#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int h, e, a, o, w, x;
	cin >> h >> e >> a >> o >> w >> x;
	if (h+e+a+x >= o+w) cout << "Middle-earth is safe.\n";
	else cout << "Sauron has returned.\n";
	return 0;
}