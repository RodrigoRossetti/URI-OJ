#include <bits/stdc++.h>
using namespace std;

class ponto {
public:
	int x, y;
    ponto() { }
	ponto(int a, int b) { x = a, y = b; }
};

bool noSegmento(ponto p, ponto q, ponto r) {
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) && q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return 1;
    return 0;
}

int orientacao(ponto p, ponto q, ponto r) {
    int mDif = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (mDif == 0) return 0; // Colinear
    return (mDif > 0) ? 1 : 2; // 1 : Horário / 2 : Anti-Horário
}

bool convexHull_jarvis(vector<ponto> &pontos, int n) {
    if (n < 3) return 0;
    vector<ponto> hull;
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
	map<pair<int, int>, bool> remove;
	vector<ponto> aux = pontos;
	pontos.clear();
	for (int i = 0; i < n; i++)
		remove[{aux[i].x, aux[i].y}] = 0;
    for (int i = 1; i < hull.size(); i++)
		remove[{hull[i-1].x, hull[i-1].y}] = remove[{hull[i].x, hull[i].y}] = 1;
	for (int i = 0; i < aux.size(); i++)
		if (!remove[{aux[i].x, aux[i].y}]) pontos.push_back(aux[i]);
	return 1;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, x, y;
	while (cin >> n && n) {
		vector<ponto> pontos(n);
		for (int i = 0; i < n; i++) cin >> pontos[i].x >> pontos[i].y;
		int camadas = 0;
		while (convexHull_jarvis(pontos, pontos.size())) camadas++;
		if (camadas % 2 == 0) cout << "Do not take this onion to the lab!\n";
		else cout << "Take this onion to the lab!\n";
	}
	return 0;
}