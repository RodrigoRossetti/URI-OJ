#include <bits/stdc++.h>
using namespace std;

string LCSArr(vector<string> const& arr, string &s) {
    int n = arr.size();
    int len = s.length();
    string res = "";
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            string aux = s.substr(i, j);
			bool flag = 1;
            for (int k = 1; k < n; k++) {
                if (arr[k].find(aux) == string::npos) {
                    flag = 0;
					break;
				}
            }
            if (flag && aux.length() > res.length()) res = aux;
        }
    }
    return res;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	string s = "";
	cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i].length() < s.length() || s.empty()) s = v[i];
	}
	cout << LCSArr(v, s) << endl;
	return 0;
}