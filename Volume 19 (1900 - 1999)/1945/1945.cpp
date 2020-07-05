#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, ultimo;
	string s, s1, s2, s3, trash;
	unordered_map<string, int> mapa;
	while (getline(cin, s)) {
		stringstream c(s);
		c >> s1 >> trash;
		mapa[s1] = 0;
		c >> s2;
		isdigit(s2[0]) ? n = stoi(s2), mapa[s1] += n : mapa[s1] += mapa[s2];
		if (c.rdbuf()->in_avail() != 0) {
			c >> trash >> s3;
			isdigit(s3[0]) ? n = stoi(s3), mapa[s1] += n : mapa[s1] += mapa[s3];
		}
		ultimo = mapa[s1];
	}
	cout << ultimo << endl;
	return 0;
}