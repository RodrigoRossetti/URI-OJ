#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n && n) {
		int maior = 1;
		while (n != 1) {
			if (n > maior) maior = n;
			if (n % 2 == 0) n /= 2;
			else n = 3*n + 1;
		}
		cout << maior << endl;
	}
	return 0;
}