#include<stdio.h>

int main(){
    int time, av_value;
    float fuel;
    scanf("%d %d", &time, &av_value);
    fuel = ((time * av_value) / 12.0);
    printf("%.3f\n", fuel);
	return 0;
}
