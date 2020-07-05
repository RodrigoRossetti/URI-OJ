#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    long int p1, p2, i, anos = 0;
    double c1, c2;
    scanf("%d", &i);
    while (i--) {
        scanf("%ld %ld %lf %lf", &p1, &p2, &c1, &c2);
        while (p1 <= p2) {
            p1 += p1 * c1/100;
            if (c2 != 0) p2 += p2 * c2/100;
            anos++;
            if(anos > 100) break;
        }
        if (anos > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", anos);
        anos = 0;
    }
}