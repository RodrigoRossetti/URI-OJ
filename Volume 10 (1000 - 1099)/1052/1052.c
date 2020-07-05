#include <stdio.h>

int main() {
    int n;
    const char *c[12];
    c[0] = "January";
    c[1] = "February";
    c[2] = "March";
    c[3] = "April";
    c[4] = "May";
    c[5] = "June";
    c[6] = "July";
    c[7] = "August";
    c[8] = "September";
    c[9] = "October";
    c[10] = "November";
    c[11] = "December";
    scanf("%d", &n);
    n -= 1;
    printf("%s\n", c[n]);
    return 0;
}