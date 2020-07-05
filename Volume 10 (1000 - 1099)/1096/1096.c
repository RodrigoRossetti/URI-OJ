#include <stdio.h>
 
int main() {
    int i = 1;
    for (; i < 10; i+= 2) {
        printf("I=%d J=7\n", i);
        printf("I=%d J=6\n", i);
        printf("I=%d J=5\n", i);
    }
    return 0;
}