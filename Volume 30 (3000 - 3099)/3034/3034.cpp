#include <bits/stdc++.h>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n%2 == 0 || n%3 == 0) return false;
    for (int i = 5; i*i <= n; i += 6)
        if (n%i == 0 || n%(i+2) == 0)
        	return false;
    return true;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k;
	cin >> n;
	while (n--) {
		cin >> k;
		k++;
		if (k % 7 == 0 && k % 2 != 0 && ehPrimo(k+2)) cout << "Yes\n";
		else cout << "No\n";
	}
	return 0;
}