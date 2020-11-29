#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, k, pos, menor;
	while (cin >> n &&  n) {
		vector<string> v(n);
		vector<int> cards(52), elim;
		for (auto& x : v) cin >> x;
		for (auto& x : cards) cin >> x;
		pos = 0;
		while (v.size() > 1) {
			k = 0;
			menor = INT_MAX;
			elim.clear();
			for (int i = 0; i < v.size(); i++) {
				if (cards[pos] < menor) {
					menor = cards[pos];
					elim.clear();
				}
				if (cards[pos] == menor) elim.push_back(k);
				pos++, k++;
			}
			if (elim.size() == v.size()) break;
			for (int i = elim.size()-1; i >= 0; i--)
				v.erase(v.begin()+elim[i]);
			if (pos+v.size() >= 52) break;
		}
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}