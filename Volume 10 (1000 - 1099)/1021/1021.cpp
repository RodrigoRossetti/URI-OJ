#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int out[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    double value[12] = {100, 50, 20, 10, 5, 2, 1, 0.5, 0.25, 0.1, 0.05, 0.01};
    double n = 0;
    cin >> n;
    for (int i = 0; i < 12; i++) {
        out[i] = n / value[i];
        n -= value[i] * out[i];
    }
    if (n >= 0.001) out[11]++;
    cout	<< "NOTAS:" << endl
			<< out[0] << " nota(s) de R$ 100.00" << endl
			<< out[1] << " nota(s) de R$ 50.00" << endl
			<< out[2] << " nota(s) de R$ 20.00" << endl
			<< out[3] << " nota(s) de R$ 10.00" << endl
			<< out[4] << " nota(s) de R$ 5.00" << endl
			<< out[5] << " nota(s) de R$ 2.00" << endl;
	cout 	<< "MOEDAS:" << endl
			<< out[6] << " moeda(s) de R$ 1.00" << endl
			<< out[7] << " moeda(s) de R$ 0.50" << endl
			<< out[8] << " moeda(s) de R$ 0.25" << endl
			<< out[9] << " moeda(s) de R$ 0.10" << endl
			<< out[10] << " moeda(s) de R$ 0.05" << endl
			<< out[11] << " moeda(s) de R$ 0.01" << endl;
    return 0;
}