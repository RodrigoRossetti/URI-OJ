#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	while (cin >> n) {
		for (int i = 1, j = n/2; i <= n; i += 2, j--) {
			for (int k = 0; k < j; k++) cout << ' ';
			for (int k = 0; k < i; k++) cout << '*';
			cout << '\n';
		}
		for (int k = 0; k < n/2; k++) cout << ' ';
		cout << "*\n";
		for (int k = 0; k < n/2-1; k++) cout << ' ';
		cout << "***\n\n";
	}
	return 0;
}