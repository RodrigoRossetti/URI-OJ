#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int convert1(string &s) {
	if (s == "C" || s == "B#") return 0;
	if (s == "Db" || s == "C#") return 1;
	if (s == "D") return 2;
	if (s == "Eb" || s == "D#") return 3;
	if (s == "E" || s == "Fb") return 4;
	if (s == "F" || s == "E#") return 5;
	if (s == "Gb" || s == "F#") return 6;
	if (s == "G") return 7;
	if (s == "Ab" || s == "G#") return 8;
	if (s == "A") return 9;
	if (s == "Bb" || s == "A#") return 10;
	if (s == "B" || s == "Cb") return 11;
}

int convert2(string &s) {
	if (s == "C" || s == "B#") return 12;
	if (s == "Db" || s == "C#") return 13;
	if (s == "D") return 14;
	if (s == "Eb" || s == "D#") return 15;
	if (s == "E" || s == "Fb") return 16;
	if (s == "F" || s == "E#") return 17;
	if (s == "Gb" || s == "F#") return 18;
	if (s == "G") return 19;
	if (s == "Ab" || s == "G#") return 20;
	if (s == "A") return 21;
	if (s == "Bb" || s == "A#") return 22;
	if (s == "B" || s == "Cb") return 23;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, t, k, ultimo = 0;
	string s;
	while (cin >> m >> t && (m || t)) {
		vector<int> a(m-1), b(t-1);
		for (int i = 0; i < m; i++) {
			cin >> s;
			k = min(abs(convert1(s)-ultimo), abs(convert2(s)-ultimo));
			if (i) a[i-1] = k;
			ultimo = abs(k-ultimo);
		}
		for (int i = 0; i < t ;i++) {
			cin >> s;
			k = min(abs(convert1(s)-ultimo), abs(convert2(s)-ultimo));
			if (i) b[i-1] = k;
			ultimo = abs(k-ultimo); 
		}
		for (auto &x : a) cout << x << " ";
		cout << endl;
		for (auto &x : b) cout << x << " ";
		cout << endl;
		cout << (search(a.begin(), a.end(), b.begin(), b.end()) != a.end() ? "S" : "N") << endl;
	}
	return 0;
}