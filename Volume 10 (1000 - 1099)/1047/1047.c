#include <stdio.h>
 
int main() {
    int h1, h2, hf, m1, m2, mf;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
    if(m1 > m2) {
        h2 -= 1;
        m2 += 60;
    }
    if(h1 > h2) {
        h2 += 24;
    }
    hf = h2 - h1;
    mf = m2 - m1;
    if(mf == 0 && hf == 0) {
        hf = 24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hf, mf);
    return 0;
}