#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	if (max({a, b, c}) == b) swap(a, b);
	if (max({a, b, c,}) == c) swap(a, c);
    if (a >= b + c) cout << "n\n";
    else {
        if (a*a == b*b + c*c) cout << "r\n";
        else if (a*a > b*b + c*c) cout << "o\n";
        else if (a*a < b*b + c*c) cout << "a\n";
	}
	return 0;
}