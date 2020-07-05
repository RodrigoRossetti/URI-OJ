#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

class ponto {
public:
	int x, y;
    ponto() { }
	ponto(int a, int b) { x = a, y = b; }
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	ponto a, b, c;
	cout << fixed << setprecision(3);
	cin >> n;
	while (n--) {
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
		cout << abs((double)(a.x*b.y+b.x*c.y+c.x*a.y-(a.y*b.x+b.y*c.x+c.y*a.x))/2) << endl;
	}
	return 0;
}