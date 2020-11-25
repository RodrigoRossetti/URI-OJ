#include<stdio.h>
#include<stdlib.h>

int main() {
	int t, n, v, a, x, y, cont, adj[50][50];
	scanf("%d", &t);
	while (t--) {
		memset(adj, 0, sizeof(adj));
		int total = 0;
		scanf("%d %d %d", &n, &v, &a);
		while(a--) {
			scanf("%d %d", &x, &y);
			if (!adj[x][y]) {
				adj[x][y] = adj[y][x] = 1;
				total += 2;
			}
		}
		printf("%d\n", total);
	}
}