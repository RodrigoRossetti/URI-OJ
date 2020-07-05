#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t, l;
	double bs, iv, ev;;
	cin >> t >> ws;
	for (int i = 1; i <= t; i++) {
		string s;
		cin >> s >> l;
		cout << "Caso #" << i << ": " << s << " nivel " << l << '\n';
		for (int j = 0; j < 4; j++) {
			cin >> bs >> iv >> ev >> ws;
			switch(j) {
				case 0: cout << "HP: " << (int)((iv+bs+(sqrt(ev)/8)+50)*l)/50+10 << '\n'; break;
				case 1: cout << "AT: " << (int)((iv+bs+(sqrt(ev)/8))*l)/50+5 << '\n'; break;
				case 2: cout << "DF: " << (int)((iv+bs+(sqrt(ev)/8))*l)/50+5 << '\n'; break;
				case 3: cout << "SP: " << (int)((iv+bs+(sqrt(ev)/8))*l)/50+5 << '\n'; break;
			}
		}
	}
	return 0;
}