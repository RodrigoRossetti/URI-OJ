#include <stdio.h>

int main() {
    int i, j;
    char c;
    double soma;
    double v[12][12];
    scanf(" %c", &c);

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            double k;
            scanf("%lf", &k);
            v[i][j] = k;
        }
    }

    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            if(i + j > i+i) {
                soma += v[i][j];
            }
        }
    }

    if(c == 'S') {
        printf("%.1lf\n", soma);
    } else if(c == 'M') {
        printf("%.1lf\n", soma/66);
    }

    return 0;
}