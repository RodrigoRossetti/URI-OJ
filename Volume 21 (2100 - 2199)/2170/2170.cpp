#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t = 1;
    long double x, y;
	cout << fixed << setprecision(2);
    while(cin >> x >> y)
        cout << "Projeto " << t++ << ":\nPercentual dos juros da aplicacao: " << ((y/x)-1)*100 << " %\n\n";
	return 0;
}