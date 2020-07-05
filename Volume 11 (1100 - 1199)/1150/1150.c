#include<stdio.h>

int main(){
    int x, z, i;
    scanf("%d %d", &x, &z);
    while (z <= x) {
        scanf("%d", &z);
    }
    int soma = x;
    for(i = 1; soma <= z; i++) {
        soma += x+i;
    }
    printf("%d\n", i);
    return 0;
}