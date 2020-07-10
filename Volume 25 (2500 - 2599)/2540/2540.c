#include <stdio.h>

int main() {
    int n, voto;
    while (scanf("%d", &n) != EOF ) {
        int total = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &voto);
            if (voto) total++;
        }
        if (total >= (double)n/3*2) printf("impeachment\n");
        else printf("acusacao arquivada\n");
    }
    return 0;
}