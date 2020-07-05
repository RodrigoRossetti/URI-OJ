#include <stdio.h>

int main(){
    int p1, c1, p2, c2, t1, t2;
    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    t1 = p1 * c1;
    t2 = p2 * c2;
    if (t1 == t2) printf("0\n");
    else if (t2 > t1) printf("1\n");
    else printf("-1\n");
    return 0;
}