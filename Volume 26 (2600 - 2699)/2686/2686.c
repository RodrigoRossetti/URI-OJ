#include <stdio.h>
 
int main() {
    double m, x;
    int hr, min, sec;
    while (scanf("%lf", &m) != EOF) {
        if (m >= 360) m /= 360;
        hr = 6+((240*m)/3600);
        x = (240*m);
        min = ((int)x%3600)/60;
        sec = (int)x%60;
        if (hr >= 24) hr -= 24;
        if (m >= 0 && m < 90) printf("Bom Dia!!\n%02d:%02d:%02d\n", hr, min, sec);
        else if (m >= 90 && m < 180) printf("Boa Tarde!!\n%02d:%02d:%02d\n", hr, min, sec);
        else if (m >= 180 && m < 270) printf("Boa Noite!!\n%02d:%02d:%02d\n", hr, min, sec);
        else if (m >= 270 && m < 360) printf("De Madrugada!!\n%02d:%02d:%02d\n", hr, min, sec);
    }
    return 0;
}