#include <stdio.h>
 
int main() {
    double m;
    while (scanf("%lf", &m) != EOF) {
        if (m >= 360) m /= 360;
        if (m >= 0 && m < 90) printf("Bom Dia!!\n");
        else if (m >= 90 && m < 180) printf("Boa Tarde!!\n");
        else if (m >= 180 && m < 270) printf("Boa Noite!!\n");
        else if (m >= 270 && m < 360) printf("De Madrugada!!\n");
    }
    return 0;
}