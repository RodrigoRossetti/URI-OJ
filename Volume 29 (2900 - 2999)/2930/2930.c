#include <stdio.h>

int main() {
    int e, d;
    scanf("%d%d", &e, &d);
    if (e > d) printf("Eu odeio a professora!\n");
    else if (d >= e && d-e >= 3) printf("Muito bem! Apresenta antes do Natal!\n");
    else if (d >= e && d-e < 3 && d+2 <= 24) printf("Parece o trabalho do meu filho!\nTCC Apresentado!\n");
    else if (d >= e && d-e < 3 && d+2 > 24) printf("Parece o trabalho do meu filho!\nFail! Entao eh nataaaaal!\n");
    return 0;
}