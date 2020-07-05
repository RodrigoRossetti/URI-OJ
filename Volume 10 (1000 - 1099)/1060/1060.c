#include <stdio.h>

int main() {
    int i, c = 0;
    for(i = 0; i < 6; i++) {
        double t = 0;
        scanf("%lf", &t);
        if(t >= 0) {
            c++;
        }
    }
    printf("%d valores positivos\n", c);
    return 0;
}