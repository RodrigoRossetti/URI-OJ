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
	int n, m, p1, p2;
	cin >> n >> m;
	for (int i = n; i >= 2; i--) {
		if (ePrimo(i)) {
			p1 = i;
			break;
		}
	}
	for (int i = m; i >= 2; i--) {
		if (ePrimo(i)) {
			p2 = i;
			break;
		}
	}
	cout << p1*p2 << endl;
	return 0;
}