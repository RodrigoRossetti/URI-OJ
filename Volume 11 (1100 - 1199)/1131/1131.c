#include <stdio.h>
 
int main() {
    int a, b, c = 1, gremio = 0, inter = 0, empates = 0, total = 0;
    while (c == 1) {
        scanf("%d %d", &a, &b);
        if (a > b) inter++;
        else if (b > a) gremio++;
        else empates++;
        total++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &c);
    }
    printf("%d grenais\n", total);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empates);
    if (inter > gremio) printf("Inter venceu mais\n");
    else if (gremio > inter) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}