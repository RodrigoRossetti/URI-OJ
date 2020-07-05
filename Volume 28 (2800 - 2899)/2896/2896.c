#include <stdio.h>
 
int main() {
    int n, t, k;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &t, &k);
        if(t >= k)
            printf("%d\n", (t / k) + (t % k));
        else
            printf("%d\n", t);
    }
    return 0;
}