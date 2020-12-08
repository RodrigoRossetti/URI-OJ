#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define INF 1000000

bool path(int i, int j, map<int, string>& rev, vector<vector<int>>& next) {
    if (next[i][j] == -1) return 0;
    cout << rev[i];
    if (i == j) cout << " " << rev[i];
    while (i != j) {
        i = next[i][j];
        cout << " " << rev[i];
    }
    cout << endl;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c, p, w, r, a, b;
    string s, o, d;
    cin >> c;
    while (c--) {
        cin >> p;
        map<string, int> m;
        map<int, string> rev;
        int key = 0;
        for (int i = 0; i < p; i++) {
            cin >> s;
            m[s] = key;
            rev[key] = s;
            key++;
        }
        vector<vector<int>> dist(p, vector<int>(p));
        vector<vector<int>> next(p, vector<int>(p));
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < p; j++) {
                cin >> w;
                if (w == -1) dist[i][j] = INF, next[i][j] = -1;
                else dist[i][j] = w, next[i][j] = j;
            }
        }
        for (int k = 0; k < p; k++) {
            for (int i = 0; i < p; i++) {
                for (int j = 0; j < p; j++) {
                    if (dist[i][j] > dist[i][k] + dist[k][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        next[i][j] = next[i][k];
                    }
                }
            }
        }
        cin >> r;
        while (r--) {
            cin >> s >> o >> d;
            a = m[o], b = m[d];
            if (dist[a][b] == INF)
                cout << "Sorry Mr " << s << " you can not go from " << o << " to " << d << endl;
            else {
                cout << "Mr " << s << " to go from " << o << " to " << d
                     << ", you will receive " << dist[a][b] << " euros\n";
                cout << "Path:";
                path(a, b, rev, next);
            }
        }
    }
    return 0;
}