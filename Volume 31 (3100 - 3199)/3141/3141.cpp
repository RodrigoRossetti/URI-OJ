#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, a, b, k;
	getline(cin, s);
	getline(cin, a);
	getline(cin, b);
	stringstream ss1(a), ss2(b);
	a = b = "";
	while (getline(ss1, k, '/')) a = k + a;
	while (getline(ss2, k, '/')) b = k + b;
	k = to_string(stoi(a)-stoi(b));
	if (a.substr(a.length()-4, 4) == b.substr(b.length()-4, 4)) printf("Feliz aniversario!\n");
	cout << "Voce tem " << k.substr(0, k.length()-4) << " anos " << s << ".\n";
	return 0;
}