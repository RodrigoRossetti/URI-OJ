#include <stdio.h>
 
int main() {
    int x, y;
    while (scanf("%d %d", &x, &y) && x != y) {
        if (x < y) printf("Crescente\n");
        else if (x > y) printf("Decrescente\n");
    }
    return 0;
}