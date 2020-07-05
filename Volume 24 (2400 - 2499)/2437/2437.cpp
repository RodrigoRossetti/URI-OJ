#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int x0, y0, x1, y1;
	cin >> x0 >> y0 >> x1 >> y1;
	cout << abs(x0-x1)+abs(y0-y1) << endl;
	return 0;
}