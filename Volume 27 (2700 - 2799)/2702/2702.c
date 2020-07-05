#include <stdio.h>
 
int main() {
    int e[3] = {0}, d[3] = {0}, total = 0;
    scanf("%d%d%d%d%d%d", &d[0], &d[1], &d[2], &e[0], &e[1], &e[2]);
    if (e[0] > d[0]) total += e[0] - d[0];
    if (e[1] > d[1]) total += e[1] - d[1];
    if (e[2] > d[2]) total += e[2] - d[2];
    printf("%d\n", total);
    return 0;
}