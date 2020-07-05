#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b, c;
	cin >> a >> b;
	int soma, carry = 0, x = 1, menor = a.length(), maior = a.length(), flag1 = 0, flag2 = 0;
	if (a.length() > b.length()) maior = a.length(), menor = b.length(), flag1 = 1;
	else if (b.length() > a.length()) maior = b.length(), menor = a.length(), flag2 = 1;
	for (int i = menor-1, j = maior-1; i >= 0; i--, j--) {
		if (flag1) soma = soma = a[j]-'0' + b[i]-'0' + carry;
		else if (flag2) soma = a[i]-'0' + b[j]-'0' + carry;
		else soma = a[i]-'0' + b[i]-'0' + carry;
		c += (soma%10)+'0';
		soma >= 10 ? carry = soma / 10 : carry = 0;
	}
	if (flag1 || flag2) {
		for (int i = maior-1-menor; i >= 0; i--) {
			flag1 ? soma = a[i]-'0' + carry : soma = + b[i]-'0' + carry;
			c += (soma%10)+'0';
			soma >= 10 ? carry = soma / 10 : carry = 0;
		}
	}
	if (carry != 0) c += carry+'0';
	reverse(c.begin(), c.end());
	cout << c << endl;
	return 0;
}