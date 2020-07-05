#include <stdio.h>

int main(void) {
    int i = 0, j = 0;
    double n, media = 0;
    while(i != 2) {
        while(j != 2) {
            scanf("%lf", &n);
            if(n >= 0 && n <= 10) {
                j++;
                media += n;
            }
            else {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2lf\n", media/2);
        media = j = i = 0;
        while(i < 1 || i > 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &i);
        }
    }
    return 0;
}