#include <stdio.h>

int main() {
    int t = 0;
    int h, m, s;
    scanf("%d", &t);
    m = t / 60;
    s = t % 60;
    t -= 60*m;
    h = m/60;
    m -= 60*h;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}