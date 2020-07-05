#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	while (d != b) {
		switch (d) {
			case 2: case 4: case 6: case 8: case 9: case 11: case 13: c += 31; break;
			case 5: case 7: case 10: case 12: c += 30; break;
			case 3: c += 28; break;
		}
		d--;
	}
	cout << c-a << endl;
	return 0;
}