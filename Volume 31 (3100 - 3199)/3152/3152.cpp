#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

double area(vector<int>& x, vector<int>& y) {
	int n = x.size();
	double area = 0;
	int j = n-1;
	for (int i = 0; i < n; i++) {
		area += (x[j]+x[i])*(y[j]-y[i]);
		j = i;
	}
	return area/2;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> x1(4), y1(4), x2(4), y2(4);
	for (int i = 0; i < 4; i++)
		cin >> x1[i] >> y1[i];
	for (int i = 0; i < 4; i++)
		cin >> x2[i] >> y2[i];
	cout << "terreno " << (abs(area(x2, y2)) >= abs(area(x1, y1)) ? "B" : "A") << endl;
	return 0;
}