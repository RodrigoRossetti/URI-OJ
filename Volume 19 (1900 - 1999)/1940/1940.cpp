#include <bits/stdc++.h> 
using namespace std;

int main() {
    int j, r, x, maior = 0, id = -1;
    scanf("%d %d", &j, &r);
    int arr[j];
    memset(arr, 0, sizeof(arr));
    for (int i = 0; i < r; i++) {
        for (int k = 0; k < j; k++) {
            scanf("%d", &x);
            arr[k] += x;
        }
    }
    for (int i = 0; i < j; i++) {
        if (arr[i] >= maior) {
            maior = arr[i];
            id = i+1;
        }
    }
    cout << id << endl;
    return 0;
}