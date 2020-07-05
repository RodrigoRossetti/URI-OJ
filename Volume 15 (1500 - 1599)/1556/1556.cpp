#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

unordered_map<string, bool> mapa;

void subsequence(string s, set<string> &conj) {
    if (!s.empty()) {
        conj.insert(s);
        mapa[s] = 1;
        for (int i = 0; i < s.length(); i++) {
            string aux = s;
            aux.erase(aux.begin()+i);
            if (!mapa[aux]) subsequence(aux, conj);
        }
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)) {
        set<string> conj;
        mapa.clear();
        subsequence(s, conj);
        for (auto ss : conj) cout << ss << endl;
        cout << endl;
	}
	return 0;
}