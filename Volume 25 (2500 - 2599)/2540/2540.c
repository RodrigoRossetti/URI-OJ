#include <stdio.h>

int main() {
    float n,total = 0, vote;
    while(scanf("%f",&n) != EOF ){
        int i;
        for(i = 0; i<n; i++){
            scanf("%f",&vote);
            if(vote == 1){
                total++;
            }
        }
        if(total >= ((n/3)*2)){
            printf("impeachment\n");
        }
        else{
            printf("acusacao arquivada\n");
        }
        i = 0, n = 0, vote = 0, total = 0;
    }
    return 0;
}