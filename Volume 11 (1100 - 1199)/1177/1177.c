#include <stdio.h>

int main() {
    int x[1000], n, i = 0, j = 0, k = 0; 
    scanf("%d", &n);
    while (i < 1000) {
        for (j = 0; j < n; j++) {
         if(i==1000) 
          break;
            x[i] = j;
         i++;
        }
    } 
        for (k = 0; k <1000; k++) {
            printf("N[%d] = %d\n", k, x[k]);
        }
}	