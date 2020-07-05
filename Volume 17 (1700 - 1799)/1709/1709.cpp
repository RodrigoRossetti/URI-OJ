#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p;
	cin >> p;
	double meio = ((double)p+1)/2;
	int pos = 2, mov = 1;
	while (pos != 1) {
		if (pos < meio) pos += pos;
		else if (pos > meio) pos -= p+1-pos;
		mov++;
	}
	cout << mov << endl;
	return 0;
}