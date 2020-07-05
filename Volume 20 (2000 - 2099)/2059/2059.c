#include <stdio.h>
 
int main() {
    int p, j1, j2, r, a;
    scanf("%d%d%d%d%d", &p, &j1, &j2, &r, &a);
    int n = j1 + j2;
    if((r == 1 && a == 0) || (r == 0 && a == 1)) {
        printf("Jogador 1 ganha!\n");
    }
    else if(r == 1 && a == 1) {
        printf("Jogador 2 ganha!\n");
    }
    else if((p == 1 && n%2 == 0) ||(p == 0 && n%2 != 0)) {
        printf("Jogador 1 ganha!\n");
    }
    else {
        printf("Jogador 2 ganha!\n");
    }
    return 0;
}