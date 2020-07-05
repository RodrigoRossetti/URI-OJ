#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, soma, s1, s2, s3, difcol = -1, diflin = -1, dif, k;
	cin >> n;
	int arr[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	s1 = s2 = s3 = 0;
	for (int i = 0; i < n; i++) s1 += arr[i][0], s2 += arr[i][1], s3 += arr[i][2];
	if (s1 == s2 || s1 == s3) soma = s1;
	else if (s2 == s1 || s2 == s3) soma = s2;
	else if (s3 == s1 || s3 == s2) soma = s3;
	for (int i = 0; i < n; i++) {
		s1 = s2 = 0;
		for (int j = 0; j < n; j++) s1 += arr[i][j], s2 += arr[j][i];
		if (s1 != soma) diflin = i, dif = s1;
		if (s2 != soma) difcol = i;
		if (diflin != -1 && difcol != -1) break;
	}
	if (dif >= soma) k = arr[diflin][difcol]-abs(dif-soma);
	else k = arr[diflin][difcol]+abs(dif-soma);
	cout << k << " " << arr[diflin][difcol] << endl;
	return 0;
}