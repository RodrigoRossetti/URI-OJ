#include <stdio.h>
 
int main() {
    int n;
    int a = 0, m = 0;
    scanf("%d", &n);
    if(n >= 365) {
        a = n/365;
        n = n - a*365;
    }
    if(n >= 30) {
        m = n/30;
        n = n - m*30;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", a,m,n);
    return 0;
}