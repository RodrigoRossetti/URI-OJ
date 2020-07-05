#include <stdio.h>
 
int main() {
    int k;
    float i = 0;
    float j[3] = {1,2,3};
    for(k=0;k<11;k++) {
        if(i == 0 || i == 1 || i > 1.9){
            printf("I=%.0f J=%.0f\n",i,j[0]);
            printf("I=%.0f J=%.0f\n",i,j[1]);
            printf("I=%.0f J=%.0f\n",i,j[2]);
        } else {
            printf("I=%.1f J=%.1f\n",i,j[0]);
            printf("I=%.1f J=%.1f\n",i,j[1]);
            printf("I=%.1f J=%.1f\n",i,j[2]);
        }
        i += 0.2;
        j[0] += 0.2;
        j[1] += 0.2;
        j[2] += 0.2;
    }
    return 0;
}