#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

bool primo(int n) {
    if (n <= 1)  return 0;
    if (n <= 3)  return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i*i <= n; i += 6)
        if (n % i == 0 || n % (i+2) == 0)
        	return 0;
    return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int p, total = 0;
	cin >> p;
	for (int i = p, k = 0; k < 10; p++)
		if (primo(p)) total += p, k++;
	cout << total << " km/h\n";
	int tempo = 6e7/total;
	cout << tempo << " h / " << tempo/24 << " d\n";
	return 0;
}