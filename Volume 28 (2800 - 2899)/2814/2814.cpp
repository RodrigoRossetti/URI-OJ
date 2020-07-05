#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, l, xi, yi, xf, yf;
	string s;
	cin >> n;
	while (n--) {
		cin >> k >> l;
		for (int i = 0; i < l; i++) {
			cin >> s;
			for (int j = 0; j < s.length(); j++) {
				if (s[j] == 'F') xi = i*10, yi = j*10;
				else if (s[j] == 'J') xf = i*10, yf = j*10;
			}
		}
		int dist = sqrt((xf-xi)*(xf-xi)+(yf-yi)*(yf-yi));
		int db = k/(pow(0.99, dist));
		cout << db << " dBs\n";
	}
	return 0;
}