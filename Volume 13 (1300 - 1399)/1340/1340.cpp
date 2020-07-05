#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, a, b;
	bool f1, f2, f3;
	queue<int> q;
	stack<int> st;
	priority_queue<int> pq;
	while (cin >> n) {
		f1 = f2 = f3 = 1;
		pq = priority_queue<int>();
		st = stack<int>();
		q = queue<int>();
		while (n--) {
			cin >> a >> b;
			if (a == 1) pq.push(b), q.push(b), st.push(b);
			else if (a == 2) {
				if (b != q.front()) f1 = 0;
				if (b != st.top()) f2 = 0;
				if (b != pq.top()) f3 = 0;
				pq.pop(), st.pop(), q.pop();
			}
		}
		if (f1 + f2 + f3 > 1) cout << "not sure\n";
		else if (f1 + f2 + f3 == 0) cout << "impossible\n";
		else if (f1) cout << "queue\n";
		else if (f2) cout << "stack\n";
		else if (f3) cout << "priority queue\n";
	}
	return 0;
}