#include <stdio.h>

int main() {
    int n, m, dif, i, flag;
    int notas[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
    while(1) {
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) break;
        dif = m - n;
        for (i = 0, flag = 0; i < 15; i++){
            if (notas[i] == dif) {
                flag = 1;
                break;
            }
        }
        if (flag) printf("possible\n");
        else printf("impossible\n");
    }
    return 0;
}
