#include <stdio.h>
#include <math.h>

int main() {
    double l[3];
    scanf("%lf %lf %lf", &l[0], &l[1], &l[2]);
    double d = (l[1]*l[1]) - (4*l[0]*l[2]);
    if (l[0] == 0 || d < 0)
        printf("Impossivel calcular\n");
    else {
        double s1 = (-l[1]+sqrt(d))/(2*l[0]);
        double s2 = (-l[1]-sqrt(d))/(2*l[0]);
        printf("R1 = %.5lf\nR2 = %.5lf\n", s1, s2);
    }
    return 0;
}