#include <bits/stdc++.h>
using namespace std;

class ponto {
public:
	int x, y;
	ponto() { }
	ponto(int a, int b) { x = a, y = b; }
};

double distancia(ponto p, ponto q) {
    return sqrt(pow(q.x-p.x, 2)+pow(p.y-q.y, 2));
}

bool noSegmento(ponto p, ponto q, ponto r) {
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return 1;
    return 0;
}

int orientacao(ponto p, ponto q, ponto r) {
    int mDif = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (mDif == 0) return 0;
    return (mDif > 0) ? 1 : 2;
}

bool intersecta(ponto p1, ponto q1, ponto p2, ponto q2) {

    int o1 = orientacao(p1, q1, p2);
    int o2 = orientacao(p1, q1, q2);
    int o3 = orientacao(p2, q2, p1);
    int o4 = orientacao(p2, q2, q1);

    if (o1 != o2 && o3 != o4) return 1;

    if (o1 == 0 && noSegmento(p1, p2, q1)) return 1;
    if (o2 == 0 && noSegmento(p1, q2, q1)) return 1;
    if (o3 == 0 && noSegmento(p2, p1, q2)) return 1;
    if (o4 == 0 && noSegmento(p2, q1, q2)) return 1;

    return 0;
}

bool convexHull(vector<ponto> pontos, int n, vector<ponto> &hull) {
    if (n < 3) return 0;
    int l = 0;
    for (int i = 1; i < n; i++)
        if (pontos[i].x < pontos[l].x)
            l = i;
    int p = l, q;
    do {
        hull.push_back(pontos[p]);
        q = (p+1) % n;
        for (int i = 0; i < n; i++)
            if (orientacao(pontos[p], pontos[i], pontos[q]) == 2)
                q = i;
        p = q;
    } while (p != l);
    return 1;
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n, x, y;
	cout << fixed << setprecision(2);
	while (cin >> n && n) {
		vector<ponto> pontos(n, ponto());
		for (int i = 0; i < n; i++) {
			cin >> x >> y;
			pontos[i].x = x, pontos[i].y = y;
		}
		vector<ponto> hull;
		double total = 0;
		convexHull(pontos, n, hull);
		for (int i = 1; i < hull.size(); i++)
			total += distancia(hull[i-1], hull[i]);
		total += distancia(hull[hull.size()-1], hull[0]);
		cout << "Tera que comprar uma fita de tamanho " << total << ".\n";
	}
    return 0;
}