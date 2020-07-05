#include <stdio.h>

int fibonot(int n){
    int i, c, a = 0, b = 1, cnt = 0, ans = 4;
    while(cnt < n){
        for(i = a+1; i < b; i++){
            ans = i;
            if(++cnt == n)
                break;
        }
        c = a;
        a = b;
        b = c;
        b = a+b;
    }
    return ans;
}

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        printf("%d\n", fibonot(n));
    }
    return 0;
}