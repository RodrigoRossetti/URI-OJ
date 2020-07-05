#include <stdio.h>
 
int main() {
    int i, n, k, c = 0, r = 0, s = 0, total;
    char ch;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %c", &k, &ch);
        if (ch == 'C') c += k;
        else if (ch == 'S') s += k;
        else if (ch == 'R') r += k;
    }
    total = c+r+s;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (float)(c*100)/total);
    printf("Percentual de ratos: %.2f %%\n", (float)(r*100)/total);
    printf("Percentual de sapos: %.2f %%\n", (float)(s*100)/total);
    return 0;
}