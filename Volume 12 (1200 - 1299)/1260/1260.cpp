#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n >> ws;
    string s;
    while(n--) {
        int total = 0;
        map<string, int> mapa;
        map<string, int>::iterator it;
        while(getline(cin, s)) {
            if(s.size() == 0) break;
            mapa[s]++;
            total++;
        }
        for(it = mapa.begin(); it != mapa.end(); it++)
			cout << it->first << " " << fixed << setprecision(4) << ((double)it->second/total)*100 << endl;
        if (n) cout << endl;
    }
    return 0;
}