#include <stdio.h>
 
int main() {
    int l[4];
    scanf("%d %d %d %d", &l[0], &l[1], &l[2], &l[3]);
    if (l[1] > l[2] && l[3] > l[0] && l[2] + l[3] > l[0] + l[1] && l[2] > 0 && l[3] > 0 && l[0] % 2 == 0) {
        printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}