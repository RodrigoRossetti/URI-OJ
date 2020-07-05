#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
	cin >> n;
	while (n--) {
		cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy >> rx >> ry;
		if ((rx >= ax && rx >= dx) && (rx <= bx && rx <= cx) && (ry >= ay && ry >= by) && (ry <= dy && ry <= cy)) cout << 1 << endl;
		else if ((rx >= dx && rx >= cx) && (rx <= ax && rx <= bx) && (ry >= dy && ry >= ay) && (ry <= cy && ry <= by)) cout << 1 << endl;
		else if ((rx >= cx && rx >= bx) && (rx <= dx && rx <= ax) && (ry >= cy && ry >= dy) && (ry <= by && ry <= ay)) cout << 1 << endl;
		else if ((rx >= bx && rx >= ax) && (rx <= cx && rx <= dx) && (ry >= by && ry >= cy) && (ry <= ay && ry <= dy)) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}