#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n, i, pico, padrao = 1;
    scanf("%d", &n);
    int arr[n];
    if (n > 1) {
        for(i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    }
    if (n > 2) {
        for(i = 0; i < n-2; i++) {
            if((arr[i] > arr[i+1] && arr[i+1] > arr[i+2]) || (arr[i] < arr[i+1] && arr[i+1] < arr[i+2]) || (arr[i] == arr[i+1]) || (arr[i+1] == arr[i+2])) {
                padrao = 0;
                break;
            }
        }
    }
    if (n == 2 && arr[0] == arr[1]) {
        padrao = 0;
    }
    printf("%d\n", padrao);
}