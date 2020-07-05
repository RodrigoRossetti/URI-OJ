#include <stdio.h>
 
int main() {
    int hi, hf, total = 0;
    scanf("%d %d", &hi, &hf);
    if (hi > hf) hf += 24;
    if (hi == hf) total = 24;
    else total = hf - hi;
    printf("O JOGO DUROU %d HORA(S)\n", total);
    return 0;
}