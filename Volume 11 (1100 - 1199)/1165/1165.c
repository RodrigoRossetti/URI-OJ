#include <stdio.h>

int is_prime(int num) {
    int i;
     if (num <= 1) { return 0; };
     if (num % 2 == 0 && num > 2) { return 0; };
     for(i = 3; i < num / 2; i+= 2) {
         if (num % i == 0) { return 0; }
     }
     return 1;
}

int main() {
    int n, i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        int x;
        scanf("%d", &x);
        if(is_prime(x)) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }
    return 0;
}