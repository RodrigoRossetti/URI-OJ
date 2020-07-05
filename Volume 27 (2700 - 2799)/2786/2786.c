#include <stdio.h>
 
int main() {
    int largura, comprimento, perimetro, tipo1, tipo2;
    scanf("%d%d", &largura, &comprimento);
    perimetro = 2*largura + 2*comprimento;
    tipo1 = largura*comprimento + (largura-1)*(comprimento-1);
    tipo2 = perimetro - 4;
    printf("%d\n%d\n", tipo1, tipo2);
    return 0;
}