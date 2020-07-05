#include <bits/stdc++.h>
using namespace std;

string findStem(vector<string> &arr) { 
    string s = arr[0], res = ""; 
    for (int i = 0; i < arr.size(); i++) { 
        for (int j = 1; j <= s.length(); j++) { 
            string stem = s.substr(i, j);
            int k = 1; 
            for (k = 1; k < arr.size(); k++)
                if (arr[k].find(stem) == string::npos)
                    break; 
            if (k == arr.size() && res.length() <= stem.length()) {
				if (res.length() == stem.length() && stem < res) res = stem;
				else res = stem;
			}
        } 
    } 
    return res; 
} 

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	vector<string> arr;
	string s, rna;
	cin >> n >> ws;
	while (n--) {
		cin >> s;
		arr.push_back(s);
	}
	cin >> rna;
	for (int i = 0; i < arr.size(); i++) {
		size_t pos = arr[i].find(rna);
		while (pos != string::npos) {
			arr[i].erase(pos, rna.length());
			pos = arr[i].find(rna);
		}
	}
	cout << findStem(arr) << endl;
	return 0;
}