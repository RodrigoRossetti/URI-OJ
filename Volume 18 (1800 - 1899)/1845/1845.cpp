#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<int, bool> m;
	m['b'] = m['B'] = m['J'] = m['j'] = m['P'] = m['p'] = m['V'] = m['v'] = m['X'] = m['x'] = m['Z'] =
	m['z'] = m['S'] = m['s'] = 1;
	m['A'] = m['a'] = m['C'] = m['c'] = m['D'] = m['d'] = m['E'] = m['e'] = m['F'] = m['f'] = m['G'] =
	m['g'] = m['H'] = m['h'] = m['I'] = m['i'] = m['K'] = m['k'] = m['L'] = m['l'] = m['M'] = m['m'] =
	m['N'] = m['n'] = m['O'] = m['o'] = m['Q'] = m['q'] = m['R'] = m['r'] = m['T'] = m['t'] = m['U'] =
	m['u'] = m['W'] = m['w'] = m['Y'] = m['y'] = 0;
	char c;
	bool f = 1;
	while ((c = getchar()) != EOF) {
        if (m[c]) c = (isupper(c) ? 'F' : 'f');
        if ((c != 'F' && c != 'f') || f) cout << c;
        if (c == 'F' or c == 'f') f = 0;
        else f = 1;
    }
    return 0;
}