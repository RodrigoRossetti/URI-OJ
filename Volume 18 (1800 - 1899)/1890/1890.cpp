#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(0);
	int t, c, d;
    cin >> t;
    while (t--) {
        cin >> c >> d;
        if (c == 0 && d == 0) cout << 0 << endl;
        else cout << pow(26, c)*pow(10, d) << endl;
    }
	return 0;
}