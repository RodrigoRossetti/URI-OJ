#include <stdio.h>
 
int main() {
    int i = 1, j = 60;
    for (; j != -5; i += 3, j -= 5) {
        printf("I=%d J=%d\n", i, j);
    }
    return 0;
}