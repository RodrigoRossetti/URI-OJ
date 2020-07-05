#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	while (getline(cin, s)) {
		int total = 0, palavras = 0;
		stringstream ss(s);
		while (ss >> s) {
			bool flag = 1;
            int atual = 0;
            for (int i = 0 ; i < s.length(); i++) { 
                if (isdigit(s[i]) || s[i] == '.' && (i != s.length()-1 || s.length() == 1)) {
                    flag = 0;
					break;
				}
                else if (s[i] != '.') atual++;
            }
            if (flag) total += atual, palavras++;
		}
		int k = (palavras ? total/palavras : 0);
		if (k <= 3) cout << "250\n";
		else if (k < 6) cout << "500\n";
		else cout << "1000\n";
	}
	return 0;
}