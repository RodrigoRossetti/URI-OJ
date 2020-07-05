#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int mes, dia, total, i;
    int ano[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 25};
    while(scanf("%d%d", &mes, &dia) != EOF) {
        if(mes == 12 && dia == 25) printf("E natal!\n");
        else if(mes == 12 && dia > 25) printf("Ja passou!\n");
        else if(mes == 12 && dia == 24) printf("E vespera de natal!\n");
        else {
            total = ano[mes-1] - dia;
            for(i = mes; i < 12; i++)
                total += ano[i];
            printf("Faltam %d dias para o natal!\n", total);
        }
    }
}