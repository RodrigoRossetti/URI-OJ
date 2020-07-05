#include <bits/stdc++.h>
using namespace std;

int soma(int k) {
	int total = 0;
	while (k) {
		total += (k % 10);
		k /= 10;
	}
	return total;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s;
	cin >> n;
	while (n--) {
		cin >> s;
		int uns = 0, zeros = 0;
		for (int i = 0 ; i < s.size(); i += 2) zeros += (s[i] - '0');
		for (int i = 1 ; i < s.size(); i += 2) uns += (s[i] - '0');
		zeros = soma(zeros);
		uns = soma(uns);
		cout << zeros + uns << '\n';
	}
}