#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, i = 1;
	while (cin >> n && n) {
		deque<char> v = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
						 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
		cout << "Instancia " << i << '\n';
		while (n--) {
			cin >> x;
			char c = v[x-1];
			cout << c;
			v.erase(v.begin()+x-1);
			v.push_front(c);
		}
		cout << '\n' << '\n';
		i++;
	}
	return 0;
}