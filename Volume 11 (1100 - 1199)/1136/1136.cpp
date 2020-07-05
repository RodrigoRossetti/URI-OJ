#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, b, flag, arr[91], x[92];
    while (cin >> n >> b && n && b) {
        flag = 1;
        memset(arr, 0, sizeof(arr));
        memset(x, 0, sizeof(x));
        for (int i = 0; i < b; i++)
            cin >> x[i];
        for (int i = 0; i < b; i++)
            for (int j = i; j < b; j++)
                arr[abs(x[i]-x[j])] = 1;
        for (int i = 0; i <= n; i++)
            if (arr[i] == 0)
                flag = 0;
        flag ? cout << "Y\n" : cout << "N\n";
    }
    return 0;
}