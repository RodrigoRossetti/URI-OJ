#include <stdio.h>
#include <string.h>
 
int main() {
    int k = 0, f = 0;
    char p[50];
    scanf("%d", &k);
    for(int i = 0; i < k; i++) {
        scanf("%s%d", &p, &f);
        if(strcmp(p, "Thor") == 0) {
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
    }
    return 0;
}