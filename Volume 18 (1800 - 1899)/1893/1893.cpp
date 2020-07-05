#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	cin >> a >> b;
	if (b >= 0 && b <= 2) cout << "nova\n";
	else if (b >= 3 && b <= 96 && b >= a) cout << "crescente\n";
	else if (b >= 97 && b <= 100) cout << "cheia\n";
	else if (b >= 3 && b <= 96 && b <= a) cout << "minguante\n";
	return 0;
}