#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

bool mesmoGrupo(int a, int b) {
	if (b < a) swap(a, b);
	if (a == 0 && (b == 97 || b == 98 || b == 99)) return 1;
	for (int i = a; i < b; i++)
		if (i % 4 == 0)
			return 0;
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double v;
	string s1, s2, s3;
	cout << fixed << setprecision(2);
	while (cin >> v >> s1 >> s2 && (v || s1 != "0" || s2 != "0")) {
		while (s1.length() < 4) s1 = '0'+s1;
		while (s2.length() < 4) s2 = '0'+s2;
		int l1 = s1.length(), l2 = s2.length();
		if (s1[l1-1] == s2[l2-1] && s1[l1-2] == s2[l2-2]) {
			if (s1[l1-3] == s2[l2-3])
				cout << (s1[l1-4] == s2[l2-4] ? v*3000 : v*500);
			else
				cout << v*50;
		}
		else {
			int a = 10*(s1[l1-2]-'0')+(s1[l1-1]-'0');
			int b = 10*(s2[l2-2]-'0')+(s2[l2-1]-'0');
			cout << (mesmoGrupo(a, b) ? v*16 : 0);
		}
		cout << endl;
	}
	return 0;
}