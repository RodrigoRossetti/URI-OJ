#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, a, b, c, d;
	scanf("%d", &n);
	while (n--) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
		double k = (double)(b-d)/(a-c);
		string s = to_string(k);
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '.') {
				printf(",%c%c\n", s[i+1], s[i+2]);
				break;
			}
			else printf("%c", s[i]);
		}
	}
	return 0;
}