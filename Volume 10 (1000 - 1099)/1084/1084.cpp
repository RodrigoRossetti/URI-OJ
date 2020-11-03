#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, d, k;
	while (scanf("%d%d ", &n, &d) && (n || d)) {
		deque<int> deq;
		for (int i = 0; i < n; i++) {
			k = getchar()-'0';
			if (d) {
				if (deq.empty()) deq.push_back(k);
				else {
					if (deq.back() > k) deq.push_back(k);
					else {
						while (!deq.empty() && deq.back() < k) {
							if (d == 0) break;
							deq.pop_back();
							d--;
						}
						deq.push_back(k);
					}
				}
			}
			else deq.push_back(k);
		}
		while (d--) deq.pop_back();
		while (!deq.empty()) {
			printf("%d", deq.front());
			deq.pop_front();
		}
		puts("");
	}
	return 0;
}