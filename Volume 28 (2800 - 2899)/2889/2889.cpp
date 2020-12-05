#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

struct times {
    int gols, pontos;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, a, b, p1, p2, x, y;
    cin >> n;
    vector<int> vice(n, 0);
    vector<times> t(n);
    while (cin >> m && m) {
        for (int i = 0; i < n; i++)
            t[i].pontos = t[i].gols = 0;
        while (m--) {
            cin >> a >> p1 >> b >> p2;
            a--, b--;
            if (p1 > p2) t[a].pontos += 3;
            else if (p2 > p1) t[b].pontos += 3;
            else t[a].pontos++, t[b].pontos++;
            t[a].gols += p1, t[b].gols += p2;
        }
        x = 0, y = 1;
        for (int i = 1; i < n; i++) {
            if 	(t[i].pontos > t[x].pontos ||
                (t[i].pontos == t[x].pontos && t[i].gols > t[x].gols)) y = x, x = i;
            else if	(t[i].pontos > t[y].pontos ||
                    (t[i].pontos == t[y].pontos && t[i].gols > t[y].gols)) y = i;
        }
        vice[y]++;
    }
    cout << (*max_element(vice.begin(), vice.end()) == vice[0] ? "Y" : "N") << endl;
    return 0;
}