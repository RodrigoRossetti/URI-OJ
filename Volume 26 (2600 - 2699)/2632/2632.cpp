#include <bits/stdc++.h>
using namespace std;

typedef struct {
	int x, y, radius;
} circ;

typedef struct {
	int x, y;
	double halfWidth, halfHeight;
} rect;

bool intersect(circ c, rect r) {
    double cx = abs(c.x - r.x - r.halfWidth);
    double xDist = r.halfWidth + c.radius;
    if (cx > xDist) return false;
    double cy = abs(c.y - r.y - r.halfHeight);
    double yDist = r.halfHeight + c.radius;
    if (cy > yDist) return false;
    if (cx <= r.halfWidth || cy <= r.halfHeight) return true;
    double xCornerDist = cx - r.halfWidth;
    double yCornerDist = cy - r.halfHeight;
    double xCornerDistSq = xCornerDist * xCornerDist;
    double yCornerDistSq = yCornerDist * yCornerDist;
    double maxCornerDistSq = c.radius * c.radius;
    return xCornerDistSq + yCornerDistSq <= maxCornerDistSq;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		int w, h, x0, y0, cx, cy, raio, nivel, dano;
		string tipo;
		cin >> w >> h >> x0 >> y0 >> tipo >> nivel >> cx >> cy;
		rect rectangle;
		rectangle.x = x0, rectangle.y = y0, rectangle.halfWidth = (double)w/2, rectangle.halfHeight = (double)h/2;
		if (tipo == "fire") {
			dano = 200;
			switch(nivel) {
				case 1: raio = 20; break;
				case 2: raio = 30; break;
				case 3: raio = 50; break;
			}
		}
		else if (tipo == "water") {
			dano = 300;
			switch(nivel) {
				case 1: raio = 10; break;
				case 2: raio = 25; break;
				case 3: raio = 40; break;
			}
		}
		else if (tipo == "earth") {
			dano = 400;
			switch(nivel) {
				case 1: raio = 25; break;
				case 2: raio = 55; break;
				case 3: raio = 70; break;
			}
		}
		else if (tipo == "air") {
			dano = 100;
			switch(nivel) {
				case 1: raio = 18; break;
				case 2: raio = 38; break;
				case 3: raio = 60; break;
			}
		}
		circ circle;
		circle.x = cx, circle.y = cy, circle.radius = raio;
		if (intersect(circle, rectangle)) cout << dano << endl;
		else cout << 0 << endl;
	}
	return 0;
}