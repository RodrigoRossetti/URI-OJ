#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	long long t1 = 0, t2 = 0;
	string a, b;
	vector<string> v;
	unordered_map<string, string> mapa;
	v.push_back("A");
	cin >> n >> m;
	while (m--) {
		cin >> a >> b;
		mapa[a] = b;
	}
	while (n--) {
		a = "";
		for (int i = 0; i < v.size(); i++) {
			for (auto it = mapa.begin(); it != mapa.end(); it++) {
				if (v[i] == it->first) {
					v[i] = it->second;
					break;
				}
			}
			a += v[i];
		}
		v.clear();
		string temp = "";
		for (int i = 0; i < a.length(); i++) {
			if (temp == "") temp += a[i];
			else if (temp[0] == a[i]) temp += a[i];
			else if (temp[0] != a[i]) {
				v.push_back(temp);
				temp = a[i];
			}
		}
		if (temp != "") {
			v.push_back(temp);
		} 
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].length(); j++) {
			if (v[i][j] == 'A') t1++;
			else t2++;
		}
	}
	cout << t1 << " " << t2 << endl;
	return 0;
}