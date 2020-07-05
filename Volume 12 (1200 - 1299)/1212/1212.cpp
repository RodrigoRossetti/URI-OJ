#include <stdio.h>
#include <string.h>
using namespace std;

int NumCarryAdd(int a, int b) {
    int sd, resto = 0, carry = 0;
    while(a > 0 || b > 0) {
        int d1 = a%10;
        int d2 = b%10;
        a/=10;
        b/=10;
        sd = d1 + d2 + resto;
        if (sd >= 10) {
            resto = 1;
            carry++;
        }
        else resto = 0;
    }
    return carry;
}

int main() {
    long x, y, carry;
    while(1) {
    scanf("%ld %ld", &x,&y);
        if (x == 0 && y == 0) break;
        carry = NumCarryAdd(x, y);
        if (carry == 0) printf("No carry operation.\n");
        else if (carry==1) printf("1 carry operation.\n");
        else printf("%ld carry operations.\n", carry);
    }
    return 0;
}