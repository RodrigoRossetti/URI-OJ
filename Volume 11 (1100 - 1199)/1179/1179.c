#include <stdio.h>

int main(void) {
    int i, l, m, k, j;
    int par[5] = {0,0,0,0,0}, impar[5] = {0,0,0,0,0};
    int cp = 0, ci = 0, n;
    for(i = 0; i < 15; i++) {
        scanf("%d", &n);
        if(n % 2 == 0) {
            par[cp] = n;
            cp++;
        } else {
            impar[ci] = n;
            ci++;
        }
        if(cp == 5) {
            for(j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
                cp = 0;
            }
        } else if(ci == 5) {
            for(k = 0; k < 5; k++) {
                printf("impar[%d] = %d\n", k, impar[k]);
                ci = 0;
            }
        }
    }
    for(l = 0; l < ci; l++) {
        printf("impar[%d] = %d\n", l, impar[l]);
    }
    for(m = 0; m < cp; m++) {
        printf("par[%d] = %d\n", m, par[m]);
    }
    return 0;
}