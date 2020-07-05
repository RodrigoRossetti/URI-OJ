#include<stdio.h>
#include<stdlib.h>

int main() {
	int t, n, v, a, vertice1, vertice2, cont, matriz[50][50];
	scanf("%d", & t);
	while (t--) {
		memset(matriz, 0, sizeof(matriz));
		cont = 0;
		scanf("%d", &n);
		scanf("%d %d", &v, &a);
		for (int i = 0; i < a; i++) {
			scanf("%d %d", &vertice1, &vertice2);
			if (matriz[vertice1][vertice2] == 0) {
				matriz[vertice1][vertice2] = 1;
				matriz[vertice2][vertice1] = 1;
				cont += 2;
			}
		}
		printf("%d\n", cont);
	}
}