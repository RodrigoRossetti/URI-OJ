#include <stdio.h>
#include <string.h>
 
int main() {
    int a, b, total;
    scanf("%d", &total);
    scanf("%d%d", &a, &b);
    if(total < a+b)
        printf("Deixa para amanha!\n");
    else
        printf("Farei hoje!\n");
    return 0;
}