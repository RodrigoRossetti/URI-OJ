#include <bits/stdc++.h>
using namespace std;

void posOrdem(string pre, string in, int i, int j, int &atual) {
	if (i <= j) {
		int pos = in.find(pre[atual++]);
		posOrdem(pre, in, i, pos-1, atual);
		posOrdem(pre, in, pos+1, j, atual);
		cout << in[pos];
	}
}
 
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b;
  	while (cin >> a >> b) {
		int atual = 0;
		posOrdem(a, b, 0, a.length()-1, atual);
		cout << endl;
  	}
  	return 0;
}