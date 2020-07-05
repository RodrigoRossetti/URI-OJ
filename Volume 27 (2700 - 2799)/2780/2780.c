#include <stdio.h>
 
int main() {
    int t, s = 0;
    scanf("%d", &t);
    if (t <= 800 && t >= 0) s = 1;
    else if (t > 800 && t <= 1400) s = 2;
    else if (t > 1400 && t <= 2000) s = 3;
    printf("%d\n", s);
    return 0;
}