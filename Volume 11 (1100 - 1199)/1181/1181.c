#include <stdio.h>

int main(void) {
    double v[12][12];
    int l;
    double s = 0, m = 0;
    char c;
    scanf("%d", &l);
    scanf(" %c", &c);
    for(int i=0;i<12;i++) {
        for(int j=0;j<12;j++) {
            double k;
            scanf("%lf", &k);
            v[i][j] = k;
        }
    }
    for(int z=0;z<12;z++) {
        s += v[l][z];
    }
    m = s / 12.0;
    if(c == 'S') {
        printf("%.1lf\n", s);
    } else if(c == 'M') {
        printf("%.1lf\n", m);
    }
    return 0;
}