#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int digits(int x) {
    x = abs(x);
    return	(x < 10 ? 1 :
        	(x < 100 ? 2 :
        	(x < 1000 ? 3 :
        	(x < 10000 ? 4 :
        	(x < 100000 ? 5 :
        	(x < 1000000 ? 6 :
        	(x < 10000000 ? 7 :
        	(x < 100000000 ? 8 :
        	(x < 1000000000 ? 9 :
        	10)))))))));
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, total = 0;
	cin >> p;
	for (int i = 1; i <= p; i++)
		total += digits(i);
	cout << total << endl;
	return 0;
}