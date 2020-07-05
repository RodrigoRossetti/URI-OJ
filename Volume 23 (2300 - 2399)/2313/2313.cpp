#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (!(abs(b-c) < a && a < (b+c))) printf("Invalido\n");
    else {
        printf("Valido-");
        if (a == b && b == c) printf("Equilatero\n");
        else if (a == b || b == c || a == c) printf("Isoceles\n");
        else printf("Escaleno\n");
        if (a == sqrt(b*b+c*c) || b == sqrt(a*a+c*c) || c == sqrt(b*b+a*a)) printf("Retangulo: S\n");
        else printf("Retangulo: N\n");
    }   
}