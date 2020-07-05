#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	char a1, a2, a3, a4, a5, a6, a7, a8, a9;
	while (cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9) {
		cout << a1 << a2 << a3 << '.' << a4 << a5 << a6 << '.' << a7 << a8 << a9 << '-';
		a1 -= '0', a2 -= '0', a3 -= '0', a4 -= '0', a5 -= '0', a6 -= '0', a7 -= '0', a8 -= '0', a9 -= '0';
		cout <<	((a1*1+a2*2+a3*3+a4*4+a5*5+a6*6+a7*7+a8*8+a9*9)%11)%10 << 
				((a1*9+a2*8+a3*7+a4*6+a5*5+a6*4+a7*3+a8*2+a9*1)%11)%10 << endl;
	}
	return 0;
}