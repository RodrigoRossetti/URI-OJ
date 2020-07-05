#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a1 = 0, a2 = 0, t1 = 0, t2 = 0, flag = 0;
	string s;
	cin >> n;
	vector<string> v(2*n+1);
	for (int i = 0; i < 2*n; i++) cin >> v[i];
	v[2*n] = "sol";
	for (int i = 0; i < 2*n+1; i++) {
		if (v[i] == "chuva" && (i == 0 || v[i-1] == "sol")) {
			flag = 1;
			if (i % 2 == 0) a1 ? a1-- : t1++;
			else a2 ? a2-- : t2++;
		}
		else if (v[i] == "sol" && flag) {
			flag = 0;
			i % 2 == 0 ? a1++ : a2++;
		}
	}
	cout << t1 << ' ' << t2 << '\n';
	return 0;
}