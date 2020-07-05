#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b) { 
    if (a == 0) return b; 
    return mdc(b % a, a); 
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num, den, apostas[101], i = 0;
	while (cin >> num >> den) {
		apostas[i] = mdc(num,den);
		apostas[i] > 5 ? cout << "Noel\n" : cout << "Gnomos\n";
		i++;
	}
	for (int j = i; i > 0; i--) cout << apostas[i-1] << " ";
	cout << endl;
	return 0;
}