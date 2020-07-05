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
	int n, x;
	set<int> v;
	cin >> n;
	while (n--) {
		cin >> x;
		if (ePrimo(x)) v.insert(x);
	}
	cout << v.size() << endl;
	for (set<int>::iterator it = v.begin(); it != v.end(); it++) {
		if (it == --v.end()) cout << *it << ".";
		else cout << *it << ", ";
	}
	cout << endl;
	return 0;
}