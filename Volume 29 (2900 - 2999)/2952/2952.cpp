#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> kardane(vector<long long> v) {
	long long atualMaior = v[0], maior = v[0]; 
	long long atualMenor = v[0], menor = v[0]; 

	for (int i = 1; i < v.size(); i++) { 
		atualMaior = max(v[i], atualMaior+v[i]); 
		maior = max(atualMaior, maior); 
		atualMenor = min(v[i], atualMenor+v[i]); 
		menor = min(atualMenor, menor); 
	} 
	return make_pair(maior, menor); 
}

int main() {
	int n;
	char c;
	vector<long long> v;
	cin >> n;
	while (n--) {
		cin >> c;
		if (c == 'A') v.push_back(-50); 
		else if (c == 'C') v.push_back(-13500); 
		else if (c == 'S') v.push_back(200); 
		else if (c == 'M') v.push_back(550); 
		else if (c == 'P') v.push_back(13000); 
		else if (c == 'K') v.push_back(-20); 
		else if (c == 'B') v.push_back(40); 
	}
	if (v.size() == 0) cout << "0 0\n";
	else {
		pair<long long, long long> p = kardane(v);
		cout << p.first << " " << p.second << endl;
	}
	return 0;
}