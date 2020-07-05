#include <stdio.h>
 
int main() {
    long a, b, c, inter;
    scanf("%ld %ld %ld", &a, &b, &c);
    if (b > a && b > c) {
        inter = a;
        a = b;
        b = inter;
    }
    if (c > a && c > b) {
        inter = a;
        a = c;
        c = inter;
    }
    if (a >= b + c)
        printf("n\n");
    else {
        if (a*a == b*b + c*c)
            printf("r\n");
        else if (a*a > b*b + c*c)
            printf("o\n");
        else if (a*a < b*b + c*c)
            printf("a\n");
    }
    return 0;
}