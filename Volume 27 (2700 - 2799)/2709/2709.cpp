#include <bits/stdc++.h>
using namespace std;

bool ePrimo(int n) {
	if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n % 2 == 0 || n % 3 == 0) return false; 
    for (int i = 5; i*i <= n; i += 6) 
        if (n % i == 0 || n % (i+2) == 0) 
           return false; 
    return true; 
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, n, x, total;
	while (cin >> m) {
		total = 0;
		vector<int> v;
		for (int i = 0; i < m; i++) {
			cin >> x;
			v.push_back(x);
		}
		cin >> n;
		for (int i = m-1; i >= 0; i -= n) {
			total += v[i];
		}
		cout << (ePrimo(total) ? "You’re a coastal aircraft, Robbie, a large silver aircraft.\n" : "Bad boy! I’ll hit you.\n");
	}
	return 0;
}