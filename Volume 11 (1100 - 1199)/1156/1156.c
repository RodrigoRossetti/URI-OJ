#include <stdio.h>
#include <math.h>
 
int main() {
    double i, s = 1;
    for(i=1;i<=18;i++) {
        s += (1+(2*i))/(pow(2, i));
    }
    printf("%.2lf\n", s);
    return 0;
}