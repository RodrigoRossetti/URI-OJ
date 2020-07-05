#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, i;
    double dificuldade, min = 11, max = -1, total = 0, notas[7];
    char nome[256];
    scanf("%d", &n);
    while (n--) {
        cin >> nome;
        scanf("%lf", &dificuldade);
        for(i = 0; i < 7; i++) {
            scanf("%lf", &notas[i]);
            total += notas[i];
            if(notas[i] < min) min = notas[i];
            if(notas[i] > max) max = notas[i];
        }
        printf("%s %.2lf\n", nome, (total-min-max)*dificuldade);
        min = 11; max = -1; total = 0;
    }
}