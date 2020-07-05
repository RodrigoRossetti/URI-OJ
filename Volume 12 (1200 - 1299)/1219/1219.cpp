#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed << setprecision(4);
	double a, b, c;
	while (cin >> a >> b >> c) {
		double p = a+b+c;
		double sp = p/2;
		double violeta = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
		double r_rosa = 2*violeta/p;
		double rosa = M_PI*r_rosa*r_rosa;
		double r_girassol = (a*b*c)/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
		double girassol = M_PI*r_girassol*r_girassol;
		cout << girassol-violeta << " " << violeta-rosa << " " << rosa << endl;
	}
	return 0;
}