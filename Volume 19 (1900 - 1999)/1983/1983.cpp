#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    long int code, codef;
    float note, max = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%ld %f", &code, &note);
        if (note > max) {
            codef = code;
            max = note;
        }
    }
    if (max < 8) printf("Minimum note not reached\n");
    else printf("%ld\n", codef);
}